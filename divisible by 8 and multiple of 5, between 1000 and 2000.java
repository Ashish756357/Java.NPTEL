package test1;
import java.util.Scanner;

public class tute3{
public static void main(String[] args) {
	
//	Talking the stating value from the user
	System.out.printf("Enter the starting point:");
	Scanner S = new Scanner(System.in);
	int start = S.nextInt();
	System.out.printf("Enter the endig point:");
	int end = S.nextInt();
	
//	using for loop and if control statement to check the condition
	System.out.println("The following numbers are divisible by 8 and multiple of 5, between 1000 and 2000:");
	for(int i = start;i <= end;i++) {
		if(i % 8 == 0 && i % 5 == 0) {
			System.out.println(i);
			}
		}
		
	}
}
