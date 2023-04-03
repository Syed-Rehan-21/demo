#include <stdio.h>

int is_prime(int n); // function to check if a number is prime
int fibonacci(int n); // function to calculate the nth Fibonacci number

int main() {
    int n, i, fib_num;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The first %d prime numbers in the Fibonacci sequence are:\n", n);
    for (i = 1; i <= n; i++) {
        fib_num = fibonacci(i);
        if (is_prime(fib_num)) {
            printf("%d ", fib_num);
        }
    }
    return 0;
}

int is_prime(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
