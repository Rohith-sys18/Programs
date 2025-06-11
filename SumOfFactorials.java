import java.util.Scanner;

public class SumOfFactorials {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number to find the sum of factorials up to that number: ");
        int number = scanner.nextInt();
		int sum = 0;
        for (int i = 1; i <= number; i++) {
            sum += factorial(i); 
        }

        System.out.println("The sum of factorials from 1 to " + number + " is: " + sum);
        scanner.close();
    }
    public static long factorial(int num) {
        long fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
}
