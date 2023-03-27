//7. Write a program in C to add two numbers using pointers. 
#include<stdio.h>
#include<conio.h>
void add(int*p,int*q);
void main()
{
	int a,b;
	printf("Enter first number:");
	scanf("%d",&a);
	printf("Enter second number:");
	scanf("%d",&b);
	add(&a,&b);
}
void add(int*p,int*q)
{
	int sum;
	sum=*p+*q;
	printf("The sum of two numbers is %u",sum);
}
