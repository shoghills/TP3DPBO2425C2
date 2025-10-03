#include "Lizard.h"

Lizard::Lizard(string n, double l, string h, string d, bool t)
    : Reptile(n, l, h, d), tailRegrow(t) {}

void Lizard::display() {
    cout << "Lizard: " << name
         << ", Tail can regrow: " << (tailRegrow ? "Yes" : "No")
         << ", Habitat: " << habitat << endl;
}
