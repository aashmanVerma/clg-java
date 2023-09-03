package pkg;

import java.util.ArrayList;
import java.util.List;

public class LibraryShelf {
    
}

public class LibraryItem extends LibraryShelf {
    private String type;
    private String title;

    LibraryItem(String type, String title) {
        this.title = title;
        this.type = type;
    }

    public String getTitle() {
        return title;
    }
    public String setTitle(String title) {
        this.title=title;
    }
}

public class Library extends LibraryShelf {
    private List<LibraryItem> items;
    public Library() {
        items = new ArrayList<>();
    }
    public void addItem(LibraryItem item) {
        items.add(item);
    } 
    public void editItem(LibraryItem item, String title) {
        item.setTitle(title);
    }
}
