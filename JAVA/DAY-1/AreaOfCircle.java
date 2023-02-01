import java.util.*;

public class AreaOfCircle {
    public static void main(String[] args) {

        try (Scanner sc = new Scanner(System.in)) {

            float radius = sc.nextFloat();
            /*
             * ERROR -> in java every decimal value considered as double so we cannot assign
             * asign double vlue
             * to a float
             * sol -> for that use like this 3.14f 'f' means it is float
             */
            float area = 3.14f * radius * radius;

            System.out.println(area);

        }
    }
}
