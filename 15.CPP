//write a C program to input an integer number and check the last digit of number is even or odd.
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1;
	clrscr();
	printf("Enter a no:");
	scanf("%d",&n1);
	if ((n1%10)%2==0)
	{
		printf("Even no.");
	}
	else
	{
		printf("odd no.");
	}
	getch();
}