// write a program to find the factorial of the number
#include<stdio.h>  
int main()    
{    
 int i,f=1,number;    
 printf("Enter a number: ");    
  scanf("%d",&number);    
    for(i=1;i<=number;i++)
	{    
      f=f*i;    
    }    
  printf("Factorial of %d is: %d",number,f);    
return 0;  
}   
