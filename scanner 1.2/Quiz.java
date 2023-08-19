import java.util.Scanner;

public class Quiz {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String[] questions = {
            "What is the capital of India?",
            "Which planet is known as the Red Planet?",
            "How many continents are there on Earth?"
        };
        String[] answers = {
            "Delhi",
            "Mars",
            "7"
        };
        int score = 0; 
        System.out.println("Welcome to the Quiz Game!");

        for (int i = 0; i < questions.length; i++) {
            System.out.println("\nQuestion " + (i + 1) + ": " + questions[i]);
            System.out.print("Your Answer: ");
            String userAnswer = scanner.nextLine();

            if (userAnswer.equalsIgnoreCase(answers[i])) {
                System.out.println("Correct!");
                score++;
            } else {
                System.out.println("Wrong. The correct answer is: " + answers[i]);
            }
        }
        System.out.println("\nQuiz Complete!");
        System.out.println("Your Score: " + score + " out of " + questions.length);
        scanner.close();
    }
}
