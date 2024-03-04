import java.util.Scanner;

public class Problem1 {
    public static int CountDigits(int num) {
        int result = 0;
        while (num != 0) {
            num = num / 10;
            result++;
        }
        return result;
    }

    public static void main(String[] args) {
        // declare variables and take input
        int num, rem, temp;
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        temp = num;
        int n = CountDigits(num);
        int a[] = new int[n];

        // REVERSE THE DIGITS
        while (temp > 0) {
            for (int i = 0; i < n; i++) {
                rem = temp % 10;
                a[i] = rem;
                temp = temp / 10;
            }
        }

        // create single number from array
        int s = 0;
        for (int i = 0; i < n; i++) {
            s = s * 10 + a[i];
        }

        System.out.println("Original number: " + num);
        System.out.println("Reversed number: " + s);

        // check if the number is pallindrome or not
        if (s == num) {
            System.out.println("Pallindrome");
        } else {
            System.out.println("Not Pallindrome");
        }
    }
}
