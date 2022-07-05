class _2a_Fibo {
    public static void main(String[] args) {
        for (int i = 0; i < 10; i++) {
            System.out.printf("\t" + Fibo(i));
        }
    }

    static int Fibo(int n) {
        if (n < 2) {// Base Condition
            return n;
        }
        return Fibo(n - 1) + Fibo(n - 2);
    }
}
