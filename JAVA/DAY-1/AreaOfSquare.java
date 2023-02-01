import java.util.*;

public class AreaOfSquare {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter side of Square");
            float side = sc.nextFloat();

            float area = side * side;
            System.out.println("Area of Square: ");
            System.out.println(area);

        }
    }
}
