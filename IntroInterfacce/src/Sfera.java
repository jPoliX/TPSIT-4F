public class Sfera extends Solido {
    private double raggio;

    public Sfera(double pesoSpecifico, double raggio) {
        super(pesoSpecifico);
        this.raggio = raggio;
    }

    @Override
    public double volume() {
        return (double) 4 / 3 * Math.PI * Math.pow(raggio, 3);
    }

    @Override
    public double superficie() {
        return (double) 4 * Math.PI * Math.pow(raggio, 2);
    }

    @Override
    public String toString() {
        return super.toString() + String.format(" Sono una sfera, la mia superficie è: %.2f e il mio volume è: %.2f", superficie(), volume());
    }
}
