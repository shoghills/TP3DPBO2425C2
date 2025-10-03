public class Crocodile extends Reptile {
    private int biteForce;

    public Crocodile(String name, double length, String habitat, String diet, int biteForce) {
        super(name, length, habitat, diet);
        this.biteForce = biteForce;
    }

    @Override
    public void display() {
        System.out.println("Crocodile: " + name +
                           ", Bite Force: " + biteForce + " N, Habitat: " + habitat);
    }
}
