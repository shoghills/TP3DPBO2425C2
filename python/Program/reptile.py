class Reptile:
    def __init__(self, nama, panjang, habitat, diet):
        self.nama = nama
        self.panjang = panjang
        self.habitat = habitat
        self.diet = diet

    def info(self):
        return f"{self.nama} | Panjang: {self.panjang}m | Habitat: {self.habitat} | Diet: {self.diet}"
