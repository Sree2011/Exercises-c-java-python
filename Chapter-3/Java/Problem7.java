import java.util.Scanner;

public class Problem7 {
    public static void main(String[] args) {
        double x, y, h, k, d, r;
        Scanner sc = new Scanner(System.in);
        x = sc.nextDouble();
        y = sc.nextDouble();
        h = sc.nextDouble();
        k = sc.nextDouble();
        r = sc.nextDouble();

        d = Math.sqrt(Math.pow(x - h, 2) + Math.pow(y - k, 2));
        if (d < r) {
            System.out.printf("The point (%f,%f) lies inside the circle with center (%f,%f)", x, y, h, k);
        } else if (d == r) {
            System.out.printf("The point (%f,%f) lies on the circle with center (%f,%f)", x, y, h, k);
        } else {
            System.out.printf("The point (%f,%f) lies outside the circle with center (%f,%f)", x, y, h, k);
        }
        sc.close();
    }
}
