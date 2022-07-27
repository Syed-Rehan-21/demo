import java.util.Scanner;
import java.util.Arrays;

class _2b_SSorting {
    public static void main(String args[]) {
        Scanner input = new Scanner(System.in);
        System.out.print("Number of Strings To be Sorted: ");
        int n = input.nextInt();
        System.out.println("Enter " + n + " Strings : ");
        String[] names = new String[n];
        for (int i = 0; i < n; i++) {
            names[i] = input.next();
        }
        String s = "";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (names[i].compareTo(names[j]) < 0) {
                    s = names[i];
                    names[i] = names[j];
                    names[j] = s;
                }
            }
        }
        System.out.print("The Strings in order are: " + Arrays.toString(names));
    }
}