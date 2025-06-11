public class RemoveWord {
    public static void main(String[] args) {
        String input = "This is a simple example. This example is easy.";
        String wordToRemove = "example";

        String result = input.replaceAll("\\b" + wordToRemove + "\\b", "").replaceAll("\\s+", " ").trim();

        System.out.println("Original String: " + input);
        System.out.println("Modified String: " + result);
    }
}
