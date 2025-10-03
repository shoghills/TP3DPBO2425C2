public class Turtle extends Reptile {
    private String shellType;

    public Turtle(String name, double length, String habitat, String diet, String shellType) {
        super(name, length, habitat, diet);
        this.shellType = shellType;
    }

    @Override
    public void display() {
        System.out.println("Turtle: " + name +
                           ", Shell: " + shellType +
                           ", Habitat: " + habitat);
    }
}
