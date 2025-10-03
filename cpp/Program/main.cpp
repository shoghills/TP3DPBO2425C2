// #include <iostream>
// #include <vector>
// using namespace std;

// #include "Reptile.h"
// #include "Snake.h"
// #include "Lizard.h"
// #include "Turtle.h"
// #include "Crocodile.h"
// #include "Dragon.h"

// int main() {
//     vector<Reptile*> reptiles;

//     // Data default
//     reptiles.push_back(new Snake("Cobra", 2.5, "Jungle", "Rodents", "Neurotoxic"));
//     reptiles.push_back(new Turtle("Sea Turtle", 1.0, "Ocean", "Seagrass", "Hard Shell"));
//     reptiles.push_back(new Crocodile("Nile Crocodile", 5.0, "River", "Fish", 16000));

//     reptiles.push_back(new Dragon("Smaug", 15.0, "Cave", "Anything", true));
//     reptiles.push_back(new Lizard("Gecko", 0.3, "House", "Insects", true));

//     cout << "=== List of Reptiles ===" << endl;
//     for (auto r : reptiles) {
//         r->display();
//     }

//     for (auto r : reptiles) delete r;
//     return 0;
// }
#include <iostream>
#include <vector>
using namespace std;

#include "Reptile.h"
#include "Snake.h"
#include "Lizard.h"
#include "Turtle.h"
#include "Crocodile.h"
#include "Dragon.h"

int main() {
    vector<Reptile*> reptiles;

    // Data default
    reptiles.push_back(new Snake("Cobra", 2.5, "Jungle", "Rodents", "Neurotoxic"));
    reptiles.push_back(new Turtle("Sea Turtle", 1.0, "Ocean", "Seagrass", "Hard Shell"));
    reptiles.push_back(new Crocodile("Nile Crocodile", 5.0, "River", "Fish", 16000));

    int choice;
    do {
        cout << "\n=== MENU ===\n";
        cout << "1. Tampilkan semua reptil\n";
        cout << "2. Tambah reptil baru\n";
        cout << "0. Keluar\n";
        cout << "Pilih: ";
        cin >> choice;

        if (choice == 1) {
            cout << "\n=== List of Reptiles ===\n";
            for (auto r : reptiles) {
                r->display();
            }
        } 
        else if (choice == 2) {
            cout << "\nPilih jenis reptil:\n";
            cout << "1. Snake\n2. Lizard\n3. Turtle\n4. Crocodile\n5. Dragon\n";
            int jenis; 
            cin >> jenis;

            string name, habitat, diet;
            double length;
            cout << "Nama: "; cin >> name;
            cout << "Panjang (m): "; cin >> length;
            cout << "Habitat: "; cin >> habitat;
            cout << "Diet: "; cin >> diet;

            if (jenis == 1) {
                string venom;
                cout << "Jenis racun: "; cin >> venom;
                reptiles.push_back(new Snake(name, length, habitat, diet, venom));
            } 
            else if (jenis == 2) {
                bool tail;
                cout << "Bisa tumbuh ekor lagi? (1=Ya, 0=Tidak): "; cin >> tail;
                reptiles.push_back(new Lizard(name, length, habitat, diet, tail));
            } 
            else if (jenis == 3) {
                string shell;
                cout << "Jenis cangkang: "; cin >> shell;
                reptiles.push_back(new Turtle(name, length, habitat, diet, shell));
            } 
            else if (jenis == 4) {
                int bf;
                cout << "Kekuatan gigitan (N): "; cin >> bf;
                reptiles.push_back(new Crocodile(name, length, habitat, diet, bf));
            } 
            else if (jenis == 5) {
                bool fly;
                cout << "Bisa terbang? (1=Ya, 0=Tidak): "; cin >> fly;
                reptiles.push_back(new Dragon(name, length, habitat, diet, fly));
            } 
            else {
                cout << "Pilihan tidak valid.\n";
            }
        }
    } while (choice != 0);

    // Hapus memory
    for (auto r : reptiles) {
        delete r;
    }

    cout << "Program selesai.\n";
    return 0;
}
