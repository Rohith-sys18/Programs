import java.util.ArrayList;
import java.util.List;

public class MergeLists {

    public static void main(String[] args) {
        List<String> list1 = new ArrayList<>();
        list1.add("siva");
        list1.add("jyothi");

        List<String> list2 = new ArrayList<>();
        list2.add("bhargava");
        list2.add("rohith");

        list2.addAll(list1);
		
        System.out.println("Merged List: " + list2);
    }
}
