public class CountDigitsString {
    public static int countDigitsString(String str) {
        int count = 0;
        for (char c : str.toCharArray()) {
            if (Character.isDigit(c)) {
                count++;
            }
        }
        return count;
    }
	 public static void main(String[] args) {
        String input = "Hello123, this is 2024!";
        int digitCount = countDigitsString(input);
        System.out.println("Number of digits in the string: " + digitCount);
    }

}
