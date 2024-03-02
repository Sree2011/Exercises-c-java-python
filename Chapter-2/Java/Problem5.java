
//import libraries
import java.util.Scanner;

public class Problem5 {
    public static void main(String[] args) {
        double a;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the angle: ");
        a = sc.nextDouble();

        System.out.println("The trigonometric ratios of angle" + a + "are: ");
        System.out.printf("SINE of angle a is : %.3f\n", Math.sin(a));
        System.out.printf("COSINE of angle a is : %.3f\n", Math.cos(a));
        System.out.printf("TANGENT of angle a is : %.3f\n", Math.tan(a));
        System.out.printf("COTANGENT of angle a is : %.3f\n", 1 / Math.tan(a));
        System.out.printf("SECANT of angle a is : %.3f\n", 1 / Math.cos(a));
        System.out.printf("COSECANT of angle a is : %.3f\n", 1 / Math.sin(a));

        sc.close();
    }
}
