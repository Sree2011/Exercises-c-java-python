
//import required libraries
import java.util.Scanner;

public class Problem6 {
    public static void main(String[] args) {
        // declare variables
        int a, b;
        int temp = 0;
        // take input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter two numbers: ");
        a = sc.nextInt();
        b = sc.nextInt();
        System.out.printf("Before Swap: a = %d, b = %d\n", a, b);
        // swap
        temp = a;
        a = b;
        b = temp;

        // print
        System.out.printf("After Swap: a = %d, b = %d", a, b);
        sc.close();
    }
}
