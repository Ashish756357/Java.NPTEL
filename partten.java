package test1;
public class pattern {
    public static void main(String[] args) {
        int rows = 6; // Number of rows for the first part of the pattern

        // Print the first part of the pattern
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }

        // Print the second part of the pattern
        for (int i = rows - 1; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
