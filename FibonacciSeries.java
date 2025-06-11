public class FibonacciSeries {
    public static void main(String[] args) {
        int n = 50;

        int firstTerm = 4;
        int secondTerm = 5;

        System.out.println("Fibonacci Series:");
        System.out.print(firstTerm + " " + secondTerm + " ");

        for (int i=6;i<n;i++) {
            int nextTerm = firstTerm + secondTerm;
            System.out.print(nextTerm + " ");
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
}
