//Write a program in C to check if a given number is prime or not
#include<stdio.h>
#include<conio.h>
void main(){
int i=0,n = 33,temp=0;
	// printf("Please give input a number: ");
	// scanf("%d",&n);
	for(i=2;i<=(n/2);i++){
		if(n%i==0)
		{
		temp=1;
		break;
		}
	}
	if(temp==1)
		printf("given number is not a prime number");
	else
		printf("given number is a prime number");
// getch();
	} 