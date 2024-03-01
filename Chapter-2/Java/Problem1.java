
//import libraries
import java.util.Scanner;

public class Problem1 {

    public static void main(String args[]) {
        int num;
        int s1 = 0;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        num = sc.nextInt();

        while (num > 0) {
            int rem;
            rem = num % 10;
            num = num / 10;
            s1 += rem;

        }
        System.out.println("The sum of digits of number is " + s1);

        sc.close();
    }

}