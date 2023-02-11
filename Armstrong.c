#include <stdio.h>
#include <math.h>

void main(){
    int num,num1, is_arm = 0,to_check, n, size = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    num1 = num;
    to_check = num;
    // printf("%d", to_check);
    while (num != 0)
    {
        num /= 10;
        size++;
    }
    while (num1 != 0)
    {
        n = num1 % 10;
        is_arm += pow(n, size);
        num1 /= 10;
    }
    
    if(is_arm == to_check){
        printf("%d is armstrong number\n", to_check);
    }
    else{
        printf("%d is not a armstrong number\n", to_check);
    }
    
    
}