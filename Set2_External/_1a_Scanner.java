import java.util.Scanner;

class _1a_Scanner {
    public static void main(String args[]) {
        int a, b;
        System.out.print("Enter Two Numbers: ");
        Scanner in = new Scanner(System.in);
        a = in.nextInt();
        b = in.nextInt();
        System.out.println("The Sum of Two Numbers is: " + (a + b));
    }
}
