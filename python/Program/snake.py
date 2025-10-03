from reptile import Reptile

class Ular(Reptile):
    def __init__(self, nama, panjang, habitat, diet, tipeVenom, lilitan, kecepatanRayap):
        super().__init__(nama, panjang, habitat, diet)
        self.tipeVenom = tipeVenom
        self.lilitan = lilitan
        self.kecepatanRayap = kecepatanRayap

    def info(self):
        return super().info() + f" | Venom: {self.tipeVenom} | Lilitan: {self.lilitan} | Kecepatan: {self.kecepatanRayap}"
