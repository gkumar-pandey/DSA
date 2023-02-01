import java.util.*;

public class Bill {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter price of pencil,pen,eraser : ");
            float pencil = sc.nextFloat();
            float pen = sc.nextFloat();
            float eraser = sc.nextFloat();

            float totalPrice = pen + pencil + eraser;

            float totalbill = totalPrice + (totalPrice * 18 / 100);
            System.out.print("Total Bill : ");
            System.out.print(totalbill);
        }
    }
}
