import java.text.SimpleDateFormat;
import java.util.Date;

public class DateFormat {

    public static void main(String[] args) {
        Date currentDate = new Date();

        SimpleDateFormat formatter = new SimpleDateFormat("dd-MM-yyyy HH:mm:ss");

        String formattedDate = formatter.format(currentDate);
        System.out.println("Formatted date: " + formattedDate);
    }
}
