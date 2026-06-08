#include <stdio.h>

int isPalindrome(int n) {
    int temp = n, rev = 0, rem;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    return (temp == rev);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome", num);
    else
        printf("%d is not a Palindrome", num);

    return 0;
}