#ifndef GENETIC_H
#define GENETIC_H

#include "individual.h"

using namespace std;

class Genetic{
    public:
        using Generation = vector<pair<Individual, double>>;
        vector<Individual> selection(const Generation&, int);
        void crossover()
        void mutation()
        void evaluation()
        //fonction fitness qui prends en parametre un objet individu
    private:
        double p;

};

#endif GENETIC_H