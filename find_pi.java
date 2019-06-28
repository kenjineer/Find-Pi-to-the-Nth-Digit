import java.lang.Math.*;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

class find_pi {
    public static void main(String[] args) {
        double pi = Math.PI;
        BigDecimal result;
        int place = 0;
        boolean limit = true;
        Scanner input = new Scanner(System.in);

        while (limit) {
            System.out.print("Enter how many decimal places of Pi to be displayed [LIMIT 15]: ");
            place = input.nextInt();

            if (place < 16 && place >= 0)
                limit = false;
            else
                System.out.println("Decimal place out of bounds! Please enter a valid value.");
        }

        result = BigDecimal.valueOf(pi).setScale(place, RoundingMode.HALF_UP);
        System.out.print("Pi in " + place + " decimal places is: " + result);
        input.close();
    }
}