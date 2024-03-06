import java.util.Scanner;

public class Problem5 {
    public static void main(String[] args) {
        float l, b, ar, per;
        Scanner sc = new Scanner(System.in);
        l = sc.nextFloat();
        b = sc.nextFloat();
        ar = l * b;
        per = 2 * (l + b);
        if (ar > per) {
            System.out.println("Area is greater than the perimeter of the rectangle");
        } else {
            System.out.println("Area is lesser than or equal to the perimeter of the rectangle");
        }
        sc.close();
    }
}
