#include <stdio.h>

int fibonacciSum(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else {
        int sum = 0, a = 0, b = 1, next;
        for (int i = 2; i <= n; i++) {
            next = a + b;
            sum += next;
            a = b;
            b = next;
        }
        return sum + 1; 
    }
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);

    int sum = fibonacciSum(n);
    printf("The sum of the first %d terms of the Fibonacci series is: %d\n", n, sum);

    return 0;
}
