import java.util.*;

public class ProductOfTwoNum {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {

            int num1 = sc.nextInt();
            int num2 = sc.nextInt();
            int product = num1 * num2;

            System.out.println(product);
        }
    }
}
