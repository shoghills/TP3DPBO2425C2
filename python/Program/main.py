from snake import Ular
from lizard import Kadal
from turtle import KuraKura
from crocodile import Buaya
from dragon import Naga

def main():
    reptiles = [
        Ular("King Cobra", 5, "Hutan", "Carnivore", "Neurotoxin", True, "Cepat"),
        Kadal("Chameleon", 0.5, "Pohon", "Serangga", True, "Bercorak", "Bersisik"),
        Naga("Naga Api", 30, "Gunung", "Carnivore", True, "Api", "Super Strength", "Fire Breath")
    ]

    while True:
        print("\n=== Menu Reptile ===")
        print("1. Lihat Semua Reptil")
        print("2. Tambah Reptil (Ular)")
        print("3. Keluar")
        pilih = input("Pilih: ")

        if pilih == "1":
            for r in reptiles:
                print(r.info())
        elif pilih == "2":
            nama = input("Nama: ")
            reptiles.append(Ular(nama, 3, "Hutan", "Carnivore", "Cytotoxin", True, "Sedang"))
            print("Ular baru ditambahkan!")
        elif pilih == "3":
            break

if __name__ == "__main__":
    main()
