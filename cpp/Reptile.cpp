#include "Reptile.h"

Reptile::Reptile(string n, double l, string h, string d)
    : name(n), length(l), habitat(h), diet(d) {}

void Reptile::display() {
    cout << "Reptile: " << name
         << ", Length: " << length
         << ", Habitat: " << habitat
         << ", Diet: " << diet << endl;
}

Reptile::~Reptile() {}
