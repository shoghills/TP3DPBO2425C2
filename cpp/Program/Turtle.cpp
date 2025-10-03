#include "Turtle.h"

Turtle::Turtle(string n, double l, string h, string d, string s)
    : Reptile(n, l, h, d), shellType(s) {}

void Turtle::display() {
    cout << "Turtle: " << name
         << ", Shell: " << shellType
         << ", Habitat: " << habitat << endl;
}
