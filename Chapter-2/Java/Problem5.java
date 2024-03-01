
//import libraries
import java.util.Scanner;

public class Problem5 {
    public static void main(String[] args) {
        double a;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the angle: ");
        a = sc.nextDouble();

        System.out.println("The trigonometric ratios of angle" + a + "are: ");
        System.out.println("SINE of angle a is : " + Math.sin(a));
        System.out.println("COSINE of angle a is : " + Math.cos(a));
        System.out.println("TANGENT of angle a is : " + Math.tan(a));
        System.out.println("COTANGENT of angle a is : " + 1 / Math.tan(a));
        System.out.println("SECANT of angle a is : " + 1 / Math.cos(a));
        System.out.println("COSECANT of angle a is : " + 1 / Math.sin(a));

    }
}
