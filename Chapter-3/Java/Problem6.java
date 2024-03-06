import java.util.Scanner;

public class Problem6 {
    public static void main(String[] args) {
        float x1, y1, x2, y2, x3, y3;
        float slope_xy, slope_yz, slope_xz;
        Scanner sc = new Scanner(System.in);
        x1 = sc.nextInt();
        y1 = sc.nextInt();
        x2 = sc.nextInt();
        y2 = sc.nextInt();
        x3 = sc.nextInt();
        y3 = sc.nextInt();

        slope_xy = (y2 - y1) / (x2 - x1);
        slope_yz = (y3 - y2) / (x3 - x2);
        slope_xz = (y3 - y1) / (x3 - x1);

        if (slope_xy == slope_yz && slope_yz == slope_xz) {
            System.out.println("Collinear points");
        } else {
            System.out.println("Non-collinear points");
        }

    }
}
