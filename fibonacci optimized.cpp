#include<stdio.h>
#include<conio.h>
#include<time.h>
long int E[100];
long int fib(int n)
{
	if(E[n]==-1)
	{
		if(n<=1)
		E[n]=n;
		else
		E[n]=fib(n-2)+fib(n-1);
	}
	return E[n];
};
int main()
{
	int n=76;
	int i;
	double d;
	clock_t a,b;
	for(i=0;i<100;i++)
	{
		E[i]=-1;
	}
	a=clock();
	printf("%ld\n",fib(n));
	b=clock();
	d=(double)(b-a)/CLOCKS_PER_SEC;
	printf("%f",d);
}
