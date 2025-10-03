#include "Crocodile.h"

Crocodile::Crocodile(string n, double l, string h, string d, int bf)
    : Reptile(n, l, h, d), biteForce(bf) {}

void Crocodile::display() {
    cout << "Crocodile: " << name
         << ", Bite Force: " << biteForce
         << " N, Habitat: " << habitat << endl;
}
