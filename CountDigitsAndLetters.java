package test1;
import java.util.Scanner; 

public class CountDigitsAndLetters {
	public static void main(String []args) {
		Scanner scanner = new Scanner(System.in);
		System.out.printf("Enter string:");
		String string = scanner.nextLine();
		
		int digits = 0;
		int letters = 0;
		
		for(int i = 0;i < string.length();i++) {
			char ch = string.charAt(i);
			if(Character.isDigit(ch)) {
				digits++;
			}else if (Character.isLetter(ch)) {
				letters++;
			}
		}
		System.out.println("Letters:"+letters);
		System.out.println("Digits:"+digits);
	}
}
