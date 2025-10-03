from reptile import Reptile

class KuraKura(Reptile):
    def __init__(self, nama, panjang, habitat, diet, jenisTempurung, kecepatanRenang, umurRata2):
        super().__init__(nama, panjang, habitat, diet)
        self.jenisTempurung = jenisTempurung
        self.kecepatanRenang = kecepatanRenang
        self.umurRata2 = umurRata2

    def info(self):
        return super().info() + f" | Tempurung: {self.jenisTempurung} | Renang: {self.kecepatanRenang} | Umur: {self.umurRata2}"
