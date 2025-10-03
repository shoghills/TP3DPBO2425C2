#ifndef LIZARD_H
#define LIZARD_H

#include "Reptile.h"

class Lizard : public Reptile {
    bool tailRegrow;
public:
    Lizard(string n, double l, string h, string d, bool t);
    void display() override;
};

#endif
