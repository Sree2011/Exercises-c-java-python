/*DECLARE FLOAT length, breadth,radius, area_cir,area_rec,per_cir,per_rec
INPUT length,breadth,radius
ASSIGN area_rec to length*breadth
ASSIGN per_rec to 2*(length+breadth)
ASSIGN area_cir to 3.14*radius^2
ASSIGN per_cir to 2*3.14*radius
DISPLAY "The length of the rectangle:"
DISPLAY length
DISPLAY "The breadth of the rectangle:"
DISPLAY breadth
DISPLAY "The radius of the circle:"
DISPLAY radius
DISPLAY "The area of the rectangle:"
DISPLAY area_rec
DISPLAY "The perimeter of the rectangle:"
DISPLAY per_rec
DISPLAY "The area of the circle:"
DISPLAY area_cir
DISPLAY "The perimeter of the circle:"
DISPLAY per_cir */

//import libraries
import java.util.Scanner;

public class Problem2 {
    public static void main(String[] args) {
        // declare variables
        double length, breadth, radius, area_cir, area_rec, per_cir, per_rec;

        // take input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter length of the rectangle:");
        length = sc.nextDouble();
        System.out.println("Enter breadth of the rectangle:");
        breadth = sc.nextDouble();
        System.out.println("Enter radius of the circle:");
        radius = sc.nextDouble();

        // calculate the results
        area_rec = length * breadth;
        per_rec = 2 * (length + breadth);
        area_cir = 3.14 * Math.pow(radius, 2);
        per_cir = 2 * 3.14 * radius;

        // display
        System.out.println("The length of the rectangle: " + length);
        System.out.println("The breadth of the rectangle: " + breadth);
        System.out.println("The radius of the circle: " + radius);
        System.out.println("The area of the rectangle: " + area_rec);
        System.out.println("The perimeter of the rectangle: " + per_rec);
        System.out.println("The area of the circle: " + area_cir);
        System.out.println("The perimeter of the circle: " + per_cir);

    }
}
