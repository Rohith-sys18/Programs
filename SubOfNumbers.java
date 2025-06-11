import java.util.Scanner;

public class SubOfNumbers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
		int sum = 1;
        int number;

        System.out.println("Enter numbers to mul to the sub. Enter 1 to finish.");
        while (true) {
            System.out.print("Enter a number: ");
            number = scanner.nextInt();
			
            if (number == 1) {
                break; 
            }
            sum -= number;
        }

        System.out.println("The sum of the entered numbers is: " + sum);
        scanner.close();
    }
}
