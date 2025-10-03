#include "Dragon.h"

Dragon::Dragon(string n, double l, string h, string d, bool f)
    : Reptile(n, l, h, d), canFly(f) {}

void Dragon::display() {
    cout << "Dragon: " << name
         << ", Can Fly: " << (canFly ? "Yes" : "No")
         << ", Habitat: " << habitat << endl;
}
