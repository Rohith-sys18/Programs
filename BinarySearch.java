import java.util.Scanner;
public class BinarySearch {
    public static int binarySearch(int[] arr, int sree) {
        int low = 0, high = arr.length - 1;
        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == sree) 
                return mid;
            else if (arr[mid] < sree)
                low = mid + 1;
            else 
                high = mid - 1;
        }
        return -1; 
    }
    public static void main(String[] args) {
        int[] arr = {2, 4, 6, 8, 10}; 
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a number to search: ");
        int sree = scanner.nextInt();
        int result = binarySearch(arr, sree);
        if (result != -1)
            System.out.println("sree is  at kadapa " + result);
        else
            System.out.println("sree not found");
    }
}
