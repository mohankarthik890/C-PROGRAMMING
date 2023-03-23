#include <stdio.h>
#include <conio.h>
int main()
{
	int r,c,a[100][100],b[100][100],sum[100][100],sub[100][100],i,j;
	printf ("enter the number of rows between 1 and 100:");
	scanf("%d,&r");
	printf("enter the number of columns between 1 and 100");
	scanf("%d,&r");
	
	printf("enter the elements of 1st matrices\n");
	   for(i=0;i<r;++i)
	   for(j=0; j<c;++j) 
	   {
	   	printf("enter element a%d%d:",i,j);
	   	scanf("%d,&a[i][j]");
	   }
	   printf("elements of 2nd matrices:\n");
	   for (i=0;i<r;++i)
	   for (j=0;j<c;++j)
	   {
	   	printf("enter elemennt b%d%d:",i,j);
	   	scanf("%d",&b[i][j]);
	   }
	   for(i=0;j<r;++i)
	   for(j=0; j<c;++j) 
	   {
	       sum[i][j]=a[i][j]+b[i][j];
	}
	   printf ("\n sum of two matrices:\n");
	      for(i=0;j<r;++i)
	   for(j=0; j<c;++j) 
	   {
	   	printf("%d",sum[i][j]);
	   	if(j==c-1)
	   	{printf("\n\n");
		   }
	   }
}
