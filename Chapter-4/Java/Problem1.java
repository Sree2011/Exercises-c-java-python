import java.util.Scanner;

public class Problem1 {
    public static void main(String[] args) {
        char word;
        int a;

        Scanner sc = new Scanner(System.in);
        word = sc.next().charAt(0);
        a = (int) word;
        if (a >= 97 && a <= 122) {
            System.out.println("Lowercase Alphabet");
        }

        if (a >= 0 || a <= 64) {
            System.out.println("Special Symbol");
        }

        sc.close();

    }
}