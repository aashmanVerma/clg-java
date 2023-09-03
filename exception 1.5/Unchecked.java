import java.util.Scanner;

public class Unchecked {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();

        try {
            int result = a/b;
            System.out.println("Result: " + result);
        } catch (ArithmeticException e) {
            // Handle the exception
            System.out.println("error " + e.getMessage());
        }
    }
}
