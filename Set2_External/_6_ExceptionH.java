class InvalidAgeException extends Exception {
    InvalidAgeException(String s) {
        super(s);
    }
}

public class _6_ExceptionH {
    static void validate(int age) throws InvalidAgeException {
        if (age < 18) {
            throw new InvalidAgeException("Not Eligible to vote!");
        } else {
            System.out.println("You are Eligible to vote!");
        }
    }

    public static void main(String[] args) {
        try {
            validate(12);
        } catch (Exception e) {
            System.out.println(e);
        } finally {
            System.out.println("This Block will always get Executed!");
        }
    }
}