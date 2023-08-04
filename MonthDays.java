package test1;
import java.util.*;

public class MonthDays {

    private static final Map<String, Integer> monthDays = new HashMap<>();

    static {
        monthDays.put("January", 31);
        monthDays.put("February", 28);
        monthDays.put("March", 31);
        monthDays.put("April", 30);
        monthDays.put("May", 31);
        monthDays.put("June", 30);
        monthDays.put("July", 31);
        monthDays.put("August", 31);
        monthDays.put("September", 30);
        monthDays.put("October", 31);
        monthDays.put("November", 30);
        monthDays.put("December", 31);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the month name: ");
        String monthName = scanner.nextLine();

        Integer days = monthDays.get(monthName);

        if (days == null) {
            System.out.println("Invalid month name.");
        } else {
            System.out.println("The number of days in " + monthName + " is " + days);
        }
    }
}
