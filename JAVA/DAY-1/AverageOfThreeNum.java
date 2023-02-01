import java.util.*;

public class AverageOfThreeNum {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            int a = sc.nextInt();
            int b = sc.nextInt();
            int c = sc.nextInt();

            float avg = (a + b + c) / 3;

            System.out.println(avg);
        }
    }
}
