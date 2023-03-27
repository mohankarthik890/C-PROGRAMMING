//9.Write a program in C to Calculate the length of the string using a pointer .
#include<stdio.h>
#include<string.h>
void len(char*c[100]);
void main()
{
	char a[100];
	printf("Input a string:");
	scanf("%s",a);
	len(&a);
}
void len(char *c[100])
{
	int n;
	n=c;
	printf("The length of given string %s is %d",n,strlen(n));
}
