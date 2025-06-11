public class RemoveAndCountWord {
    public static void main(String[] args) {
        String input = "This example is a simple example. This example is easy.";
        String wordToRemove = "example";

        int count = input.split("\\b" + wordToRemove + "\\b").length - 1;

        String result = input.replaceAll("\\b" + wordToRemove + "\\b", "").replaceAll("\\s+", " ").trim();

        System.out.println("Occurrences Removed: " + count);
        System.out.println("Modified String: " + result);
    }
}
