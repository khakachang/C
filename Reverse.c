//Write a program to reverse an integer in C
#include <stdio.h>
void main(){
    int num = 123;
    int reverse = 0;

    while (num != 0)
    {
        reverse = reverse *  10 + num % 10;
        num /= 10;
    }
    printf("%d", reverse);

}