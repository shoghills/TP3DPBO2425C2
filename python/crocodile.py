from reptile import Reptile

class Buaya(Reptile):
    def __init__(self, nama, panjang, habitat, diet, kekuatanGigit, tingkatAgresif):
        super().__init__(nama, panjang, habitat, diet)
        self.kekuatanGigit = kekuatanGigit
        self.tingkatAgresif = tingkatAgresif

    def info(self):
        return super().info() + f" | Gigitan: {self.kekuatanGigit} | Agresif: {self.tingkatAgresif}"
