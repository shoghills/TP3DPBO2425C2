public class Snake extends Reptile {
    private String venomType;

    public Snake(String name, double length, String habitat, String diet, String venomType) {
        super(name, length, habitat, diet);
        this.venomType = venomType;
    }

    @Override
    public void display() {
        System.out.println("Snake: " + name + ", Venom: " + venomType +
                           ", Habitat: " + habitat);
    }
}
