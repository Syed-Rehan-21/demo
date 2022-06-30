class Overload {
    void test() {
        System.out.println(" No parameters");
    }

    void test(int a) {
        // Display the parameter a value
        System.out.println("value of a :" + a);
    }

    void test(int a, int b) {
        // Display the parameters a, b values
        System.out.println("a and b are " + a + " " + b);
    }

    double test(double a) {
        // Display the parameter a value
        System.out.println("value of a " + a);
        return a * a;
    }
}

class MethodOverloadDemo {
    public static void main(String args[]) {
        // Create Object for Overload
        Overload ob = new Overload();
        ob.test();
        ob.test(10);
        ob.test(10, 20);
        double result;
        result = ob.test(123.25);
        System.out.println(" the result is : " + result);
        System.out.println("1604-20-737-103");
    }
}
