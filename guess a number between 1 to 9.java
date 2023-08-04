package test1;
import java.util.Scanner;

public class GuessNumber {
	public static void main(String[] arug) {
		Scanner S = new Scanner(System.in);
		
		int number = (int)(Math.random() * 9)+1;
		
		for(int guess = 1; guess <= 9;guess++) {
			System.out.printf("Enter your Guess b/w 1 to 9:");
			int userguess = S.nextInt();
			
			if(userguess==number) {
				System.out.println("Your guess is corrent");
			}
			else if(userguess < number) {
					System.out.println("Your guess is low");
				}
			else if(userguess > 9) {
				System.out.println("Your input value is more than 9");
			}
			else{
				System.out.println("Your guess is high");
			}		
		}
	}
}
