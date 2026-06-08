#include <stdio.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, rem;

    while (n > 0) {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    return (temp == sum);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong Number", num);
    else
        printf("%d is not an Armstrong Number", num);

    return 0;
}