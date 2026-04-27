package Java;
import java.util.HashSet;
import java.util.Scanner;

public class gender {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String username = sc.nextLine();

        HashSet<Character> uniqueLetters = new HashSet<>();

        for (char c : username.toCharArray()) {
            uniqueLetters.add(c);
        }

        if (uniqueLetters.size() % 2 == 0) {
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }

        sc.close();
    }
}
