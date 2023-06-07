#include <stdio.h>

void printNumbersReverse(int n) {
    if (n <= 0) {
        return;  // Base case: Stop recursion when n reaches 0 or negative
    } else {
        printf("%d ", n);  // Print the current number
        printNumbersReverse(n - 1);  // Recursive call with the next number
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    printf("Numbers in reverse order: ");
    printNumbersReverse(num);
    
    return 0;
}
