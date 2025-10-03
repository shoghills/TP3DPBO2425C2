public abstract class Reptile {
    protected String name;
    protected double length;
    protected String habitat;
    protected String diet;

    public Reptile(String name, double length, String habitat, String diet) {
        this.name = name;
        this.length = length;
        this.habitat = habitat;
        this.diet = diet;
    }

    public abstract void display();
}
