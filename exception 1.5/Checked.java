import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;

public class Checked {
    public static void main(String[] args) {
        try {
            // Attempt to open a non-existent file
            File file = new File("nonexistent.txt");
            FileReader reader = new FileReader(file);
        } catch (FileNotFoundException e) {
            // Handle the exception
            System.out.println("File not found: " + e.getMessage());
        }
    }
}
