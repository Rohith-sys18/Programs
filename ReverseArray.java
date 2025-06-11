public class ReverseArray {
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        reverse(array, 0, array.length - 1);
        for (int num : array) {
            System.out.print(num + " ");
        }
    }

    public static void reverse(int[] array, int start, int end) {
        if (start >= end) return; // Base case

        // Swap elements
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;

        reverse(array, start + 1, end - 1); // Recursive call
    }
}
