#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("enter a,b:");
	scanf("%d%d",&a,&b);
	c=pow(a,b); 
	printf( "The value of %d power %d is %d",a,b,c);
}
