#include "Snake.h"

Snake::Snake(string n, double l, string h, string d, string v)
    : Reptile(n, l, h, d), venomType(v) {}

void Snake::display() {
    cout << "Snake: " << name
         << ", Venom: " << venomType
         << ", Habitat: " << habitat << endl;
}
