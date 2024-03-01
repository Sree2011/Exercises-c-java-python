
//Import required libraries
import java.util.Scanner;

public class Problem4 {
    public static void main(String[] args) {
        // Declare variables and take input
        double t, v, wcf;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter temperature: ");
        t = sc.nextDouble();
        System.out.println("Enter velocity: ");
        v = sc.nextDouble();
        // Calculate the result
        wcf = 35.74 + (0.6215 * t) + ((0.4275 * t) - 35.75) * Math.pow(v, 0.16);
        // display the inputs and results
        System.out.println("Temperature: " + t);
        System.out.println("Velocity: " + v);
        System.out.println("Wind Chill Factor: " + wcf);
        sc.close();
    }
}
