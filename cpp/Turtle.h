#ifndef TURTLE_H
#define TURTLE_H

#include "Reptile.h"

class Turtle : public Reptile {
    string shellType;
public:
    Turtle(string n, double l, string h, string d, string s);
    void display() override;
};

#endif
