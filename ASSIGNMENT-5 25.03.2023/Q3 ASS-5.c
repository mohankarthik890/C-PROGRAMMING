//3. Compile and Execute the C program were the user to enter an integer to compute the square, cube of the given decimal number using standard method.
#include<stdio.h>
#include<conio.h>
void main()
{
	float a,squ,cub;
	printf("Enter a number:");
	scanf("%f",&a);
	squ=a*a;
	printf("Square Number=%.2f\n",squ);
	cub=a*a*a;
	printf("Cube Number=%.3f",cub);	
}
