#include<stdio.h>
#include<conio.h>
long int fibonacci(int n)
{
	short int i,a=0;
	long int b=1;
	long int c=1;
	if(n==1)
	return a;
	else if(n==2 && n==3)
	return b;
	else 
	{
		for(i=3;i<=n;i++)
		{
			c=c+b;
			b=c-b;
		}
		printf("%ld",c);
		return c;
	}
};
int main()
{
	short int n;
	printf("Enter the value:=");
	scanf("%d",&n);
	n=fibonacci(n);
}
