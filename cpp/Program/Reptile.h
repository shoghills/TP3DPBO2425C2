#ifndef REPTILE_H
#define REPTILE_H

#include <iostream>
#include <string>
using namespace std;

class Reptile {
protected:
    string name;
    double length;
    string habitat;
    string diet;
public:
    Reptile(string n, double l, string h, string d);
    virtual void display();
    virtual ~Reptile();
};

#endif
