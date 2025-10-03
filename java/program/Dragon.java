public class Dragon extends Reptile {
    private boolean canFly;

    public Dragon(String name, double length, String habitat, String diet, boolean canFly) {
        super(name, length, habitat, diet);
        this.canFly = canFly;
    }

    @Override
    public void display() {
        System.out.println("Dragon: " + name +
                           ", Can Fly: " + (canFly ? "Yes" : "No") +
                           ", Habitat: " + habitat);
    }
}
