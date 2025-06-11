public class ReverseArraywithoutRecursion {
    public static void main(String[] args) {
        int[] array = {1, 2, 3, 4, 5};
        reverse(array);
        for (int num : array) {
            System.out.print(num + " ");
        }
    }

    public static void reverse(int[] array) {
        int n = array.length;
        for (int i = 0; i < n / 2; i++) {
            int temp = array[i];
            array[i] = array[n - i - 1];
            array[n - i - 1] = temp;
        }
    }
}
