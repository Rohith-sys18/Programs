public class AscendingDescending {
    public static void main(String[] args) {
        int start = 1;  
        int end = 10;    
        System.out.println("Ascending order:");
        for (int i = start; i <= end; i++) {
            System.out.print(i + " ");
        }
        System.out.println("\nDescending order:");
        for (int i = end; i >= start; i--) {
            System.out.print(i + " ");
        }
    }
}
