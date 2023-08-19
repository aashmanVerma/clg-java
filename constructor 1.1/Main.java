public class Main {
    private String title;
    private String author;
    Main(String author, String title) {
        this.author = author;
        this.title = title;
    }
    public String getTitle() {
        return title;
    }
    public String getAuthor() {
        return author;
    }
    public static void main(String[] args) {
        Main obj = new Main("JK Rowling", "Harry Potter and the Philosophers Stone");
        System.out.println("Author is "+obj.getAuthor());
        System.out.println("Title is "+obj.getTitle());
    }
}