from reptile import Reptile

class Kadal(Reptile):
    def __init__(self, nama, panjang, habitat, diet, ekorTumbuh, polaKulit, tipeKulit):
        super().__init__(nama, panjang, habitat, diet)
        self.ekorTumbuh = ekorTumbuh
        self.polaKulit = polaKulit
        self.tipeKulit = tipeKulit

    def info(self):
        return super().info() + f" | Ekor: {self.ekorTumbuh} | Pola: {self.polaKulit} | Kulit: {self.tipeKulit}"
