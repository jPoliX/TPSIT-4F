public class Cubo extends Solido implements Validatore {
    private double lato;

    public Cubo(double pesoSpecifico, double lato) {
        super(pesoSpecifico);
        this.lato = lato;
    }

    @Override
    public double volume() {
        return Math.pow(lato, 3);
    }

    @Override
    public double superficie() {
        return 6 * Math.pow(lato, 2);
    }

    @Override
    public String toString() {
        return super.toString() + String.format(" Sono un cubo, la mia superficie è: %.2f e il mio volume è: %.2f", superficie(), volume());
    }
}
