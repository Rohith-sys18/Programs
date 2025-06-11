import java.util.Scanner;

public class SumOfNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
		int sum = 0;
        int number;

        System.out.println("Enter numbers to add to the sum. Enter 0 to finish.");
        while (true) {
            System.out.print("Enter a number: ");
            number = scanner.nextInt();
			
            if (number == 0) {
                break; 
            }
            sum +  = number;
        }

        System.out.println("The sum of the entered numbers is: " + sum);
        scanner.close();
    }
}
