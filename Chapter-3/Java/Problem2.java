import java.util.Scanner;

public class Problem2 {
    public static void main(String[] args) {
        int ram, shyam, ajay;
        Scanner sc = new Scanner(System.in);
        ram = sc.nextInt();
        shyam = sc.nextInt();
        ajay = sc.nextInt();

        if (ram < shyam && ram < ajay) {
            System.out.println("Ram is youngest");
        } else if (shyam < ram && shyam < ajay) {
            System.out.println("Shyam is youngest");
        } else {
            System.out.println("Ajay is youngest");
        }
        sc.close();
    }
}
