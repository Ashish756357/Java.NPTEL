package test1;
import java.util.Scanner;

public class PasswordValidator {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Input your password: ");
        String password = scanner.nextLine();

        if (password.length() < 6 || password.length() > 16) {
            System.out.println("Not a Valid Password");
            return;
        }

        boolean hasUppercase = false;
        boolean hasLowercase = false;
        boolean hasDigit = false;
        boolean hasSpecialChar = false;

        for (char ch : password.toCharArray()) {
            if (ch >= 'A' && ch <= 'Z') {
                hasUppercase = true;
            } else if (ch >= 'a' && ch <= 'z') {
                hasLowercase = true;
            } else if (ch >= '0' && ch <= '9') {
                hasDigit = true;
            } else if (ch == '$' || ch == '#' || ch == '@') {
                hasSpecialChar = true;
            }
        }

        if (!hasUppercase || !hasLowercase || !hasDigit || !hasSpecialChar) {
            System.out.println("Not a Valid Password");
            return;
        }

        System.out.println("Valid Password");
    }
}
