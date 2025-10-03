#ifndef DRAGON_H
#define DRAGON_H

#include "Reptile.h"

class Dragon : public Reptile {
    bool canFly;
public:
    Dragon(string n, double l, string h, string d, bool f);
    void display() override;
};

#endif
