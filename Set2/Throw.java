class Throw {
    static void avg() {
        int a = 10, b = 0, c;
        try {
            c = a / b;
            throw new ArithmeticException("demo");
        } catch (ArithmeticException e) {
            System.out.println("Exception caught :" + e);
        } finally {
            System.out.println("This Block is always Executed!");
        }
    }

    public static void main(String args[]) {
        avg();
    }
}