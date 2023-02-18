#include<stdio.h>
#include<stdbool.h>

bool is_palindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed == original;
}

int reverse(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (!is_palindrome(num)) {
        num += reverse(num);
    }
    printf("Palindrome: %d", num);
    return 0;
}
