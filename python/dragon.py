from reptile import Reptile
from mythical import MakhlukMitos

class Naga(Reptile, MakhlukMitos):
    def __init__(self, nama, panjang, habitat, diet, bisaTerbang, nafas, kekuatan, kekuatanSpesial):
        Reptile.__init__(self, nama, panjang, habitat, diet)
        MakhlukMitos.__init__(self, kekuatan, kekuatanSpesial)
        self.bisaTerbang = bisaTerbang
        self.nafas = nafas

    def info(self):
        return super().info() + f" | Terbang: {self.bisaTerbang} | Nafas: {self.nafas} | Power: {self.kekuatanSpesial}"
