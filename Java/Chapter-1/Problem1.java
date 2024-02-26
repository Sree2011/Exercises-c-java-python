// import libraries
import java.util.Scanner;

public class Problem1 {
    public static void main(String[] args) {
        // Scanner
        Scanner sc = new Scanner(System.in);

        // declare variables
        double farenheit, celsius;

        // take input
        System.out.println("Enter farenheit value:");
        farenheit = sc.nextDouble();

        // calculate result and display
        celsius = ((farenheit - 32) / 1.8);

        System.out.println("Farenheit : " + farenheit);
        System.out.println("Celsius: " + celsius);

        // close the scanner
        sc.close();
    }
}