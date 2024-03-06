import java.util.Scanner;

public class Problem8 {
    public static void main(String[] args) {
        float x, y;
        Scanner sc = new Scanner(System.in);
        x = sc.nextFloat();
        y = sc.nextFloat();

        if (x == 0 && y == 0) {
            System.out.printf("The point lies on origin");
        } else if (x != 0 && y == 0) {
            System.out.printf("The point lies on X-axis");
        } else if (x == 0 && y != 0) {
            System.out.printf("The point lies on Y-axis");
        } else {
            System.out.printf("The point lies on XY plane");
        }
        sc.close();
    }
}
