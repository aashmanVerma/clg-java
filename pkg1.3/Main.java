import pkg.Car;

public class Main {
    public static void main(String[] args) {
        Car carA = new Car();
        carA.setInfo(100, 345);
        System.out.println("Mileage is "+carA.getMileage());
    }
}

