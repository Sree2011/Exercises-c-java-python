
//import libraries
import java.util.Scanner;

public class Problem2 {
    public static void main(String[] args) {
        double x, y, r, phi;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter x:");
        x = sc.nextDouble();
        System.out.println("Enter y:");
        y = sc.nextDouble();
        r = Math.sqrt((Math.pow(x, 2) + Math.pow(y, 2)));
        phi = Math.atan(y / x);

        System.out.printf("Cartesian Coordinates: (%.3f,%.3f) \n", x, y);
        System.out.printf("Polar Coordinates: (%.3f,%.3f)", r, phi);
        sc.close();
    }
}
