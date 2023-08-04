package test1;
import java.util.Scanner;

public class SumOfTwoIntegers {
	
	public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the first integer: ");
        int firstInteger = scanner.nextInt();

        System.out.print("Enter the second integer: ");
        int secondInteger = scanner.nextInt();

        int sum = firstInteger + secondInteger;

        if (sum >= 105 && sum <= 200) {
            System.out.println("The sum is 200.");
        } else {
            System.out.println("The sum is " + sum);
        }
    }
}
