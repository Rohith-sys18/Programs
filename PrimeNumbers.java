public class PrimeNumbers {
    public static void main(String[] args) {
        int limit = 20;
        System.out.println("Prime numbers up to " + limit + ":");

        for (int num = 2; num <= limit; num++) {
            boolean isPrime = true;

            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime) {
                System.out.print(num + " ");
            }
        }
    }
}
