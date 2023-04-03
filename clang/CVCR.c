#include <stdio.h>

// function to swap two integers using call by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// function to swap two integers using call by reference
void swapByReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    // call swapByValue function
    swapByValue(x, y);

    printf("After swapByValue function:\n");
    printf("x = %d, y = %d\n", x, y);

    // call swapByReference function
    swapByReference(&x, &y);

    printf("After swapByReference function:\n");
    printf("x = %d, y = %d\n", x, y);

    return 0;
}
