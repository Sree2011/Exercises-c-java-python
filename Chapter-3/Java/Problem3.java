import java.util.Scanner;

public class Problem3 {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if (a + b + c == 180) {
            System.out.println("Valid Triangle");
        } else {
            System.out.println("Invalid Triangle");
        }
        sc.close();
    }
}
