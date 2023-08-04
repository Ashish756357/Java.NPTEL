package test1;
import java.util.*;

public class EvenNumbers {

    public static void main(String[] args) {
        List<String> evenNumbersAsStrings = new ArrayList<>();

        for (int i = 100; i <= 400; i++) {
            boolean isEven = true;
            String numberStr = String.valueOf(i);
            for (char ch : numberStr.toCharArray()) {
                if (ch % 2 != 0) {
                    isEven = false;
                    break;
                }
            }

            if (isEven) {
                evenNumbersAsStrings.add(String.valueOf(i));
            }
        }

        System.out.println("The even numbers are: " + String.join(", ", evenNumbersAsStrings));
    }
}
