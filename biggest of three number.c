//to find largest of 3 number
#include <stdio.h>
#include <conio.h>
main()
 { 
   int a,b,c;
   printf("Enter first number:");
   scanf("%d,&a");
   printf("Enter second number:");
   scanf("%d,&b");
   printf("Enter third number:");
   scanf("%d,&c");
   if(a>b&&a>c)
  {
  	printf("A is the largest number");
  	
  }
  else if (b>c&&b>a)
  {
  	printf("B is the largest number");
  }
  else if (c>b&&c>a)
  {
  	printf("C is the largest number");

  }
}
