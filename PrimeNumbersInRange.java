public class PrimeNumbersInRange {
    public static void main(String[] args) {
        int lowerLimit = 1; 
        int upperLimit = 100;

        System.out.println("Prime numbers between " + lowerLimit + " and " + upperLimit + ":");
        for (int num = lowerLimit; num <= upperLimit; num++){
			 if (isPrime(num)) {
                System.out.print(num + " ");
            }
		}
    }
    public static boolean isPrime(int number) {
        for (int i = 2; i <= Math.sqrt(number); i++) {
            if (number % i == 0) {
                return false;
            }
        }
        return true;
    }
}
