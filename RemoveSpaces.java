public class RemoveSpaces {
    public static void main(String[] args) {
        String str = "Hello World, Java!";
        String result = str.replaceAll("\\s", ""); 
        System.out.println(result); 
    }
}
