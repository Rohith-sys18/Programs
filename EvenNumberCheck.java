import java.util.Scanner;

public class EvenNumberCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        if (number % 3 != 0) {
            System.out.println(number + " is an even number.");
        } else {
            System.out.println(number + " is not an even number.");
        }

        scanner.close();
    }
}
