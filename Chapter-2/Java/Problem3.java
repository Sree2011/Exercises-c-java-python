//import required libraries

import java.util.Scanner;

public class Problem3 {

    public static void main(String[] args) {
        double L1, L2, G1, G2, d;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter latitudes in two lines:");
        L1 = sc.nextDouble();
        L2 = sc.nextDouble();
        System.out.println("Enter longitudes in two lines:");
        G1 = sc.nextDouble();
        G2 = sc.nextDouble();
        d = 3963 * Math.acos(Math.sin(L1) * Math.sin(L2) + Math.cos(L1) * Math.cos(L2) * Math.cos(G2 - G1));
        System.out.printf("Latitudes: (%.3f,%.3f)", L1, L2);
        System.out.printf("Longitudes: (%.3f,%.3f)", G1, G2);
        System.out.printf("Distance in nautical miles: %.3f", d);
        sc.close();
    }
}
