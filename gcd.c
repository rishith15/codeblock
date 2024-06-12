#include <stdio.h>

// Function to find GCD using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Compute GCD
    int result = gcd(num1, num2);

    // Output the result
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0;
}
