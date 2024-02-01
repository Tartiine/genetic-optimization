#include "genetic.h"
#include <algorithm> 
#include <random>    

using namespace std;

vector<Individual> selection(const Generation& gen, int nTour){
    vector<Individual> iSelection;
    for(int i = 0; i < gen.size(); i++){
        Generation rSelection;
        std::random_device rd; 
        std::mt19937 eng(rd()); 
        std::uniform_int_distribution<> distr(0, gen.size() - 1); // Define the range
        for(int j = 0; j < nTour; j++){
            int randomIndex = distr(eng);
            rSelection.push_back(gen[randomIndex]);
        }

        // Sort rSelection by fitness value in descending order
        std::sort(rSelection.begin(), rSelection.end(), 
                  [](const std::pair<Individual, double>& a, const std::pair<Individual, double>& b) {
                      return a.second > b.second;
                  });

        if (!rSelection.empty()) {
            iSelection.push_back(rSelection.front().first);
        }
    }

    return iSelection;
}
