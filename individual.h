#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <bitset>
#include <iostream>

using namespace std;

class Individual {
public:
    Individual();
    Individual(const Individual& other);

    bitset<10> getGenes() const{return genes;};
    void setGenes(const bitset<10>& genes);
    double fitness() const;

private:
    bitset<10> genes;
    mutable double score;
    mutable bool isFitnessValid;

};

#endif 
