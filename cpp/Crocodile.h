#ifndef CROCODILE_H
#define CROCODILE_H

#include "Reptile.h"

class Crocodile : public Reptile {
    int biteForce;
public:
    Crocodile(string n, double l, string h, string d, int bf);
    void display() override;
};

#endif
