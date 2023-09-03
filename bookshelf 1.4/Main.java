import pkg.LibraryShelf.*;

public class Main {
    public static void main(String[] args) {
        Library library = new Library();
        LibraryItem item1 = new LibraryItem("book", "harry potter");
        LibraryItem item2 = new LibraryItem("novel", "java");

        library.addItem(item1);
        library.addItem(item2);

        System.out.println(item1.getTitle());
        library.editItem(item1, item2.getTitle());
        System.out.println(item1.getTitle());

    }
}
