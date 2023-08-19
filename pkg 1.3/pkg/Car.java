package pkg;

public class Car {
    private int ptrlPrice;
    private float mileage;
    private int running;
    public void setInfo(int ptrlPrice, int running) {
        this.ptrlPrice = ptrlPrice;
        this.running = running;
    }
    public float getMileage() {
        mileage = running/ptrlPrice;
        return mileage;
    }
}
