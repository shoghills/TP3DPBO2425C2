#ifndef SNAKE_H
#define SNAKE_H

#include "Reptile.h"

class Snake : public Reptile {
    string venomType;
public:
    Snake(string n, double l, string h, string d, string v);
    void display() override;
};

#endif
