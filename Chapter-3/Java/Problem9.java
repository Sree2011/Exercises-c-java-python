import java.util.Scanner;

public class Problem9 {
    public static boolean is_leap(int year) {
        if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
            return true;
        } else {
            return false;
        }
    }

    public static void main(String args[]) {
        int year, odd_days = 0;
        Scanner sc = new Scanner(System.in);
        year = sc.nextInt();
        for (int i = 0; i < year; i++) {
            if (is_leap(year)) {
                odd_days += 366;
            } else {
                odd_days += 365;
            }
        }
        odd_days %= 7;
        String[] weekdays = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
        System.out.printf("The day of the week at 01/01/%d is %s", year, weekdays[odd_days]);
        sc.close();
    }
}
