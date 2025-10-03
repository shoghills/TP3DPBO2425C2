public class Lizard extends Reptile {
    private boolean tailRegrow;

    public Lizard(String name, double length, String habitat, String diet, boolean tailRegrow) {
        super(name, length, habitat, diet);
        this.tailRegrow = tailRegrow;
    }

    @Override
    public void display() {
        System.out.println("Lizard: " + name +
                           ", Tail can regrow: " + (tailRegrow ? "Yes" : "No") +
                           ", Habitat: " + habitat);
    }
}
