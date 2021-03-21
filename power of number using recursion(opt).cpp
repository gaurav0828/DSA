#include<stdio.h>
using namespace std;
long int pow(long int n,long int p)
{
	if (p==0)
	 return 1;
	else
	{
		 if (p%2==0)	
			return(pow(n*n,p/2));
		 else 
		 	return n*pow(n,p-1);
	}
}
int main()
{
	long int n,p;
	printf("enter no: ");
	scanf("%d",&n);
	printf("enter power: ");
	scanf("%d",&p);
	printf("%ld raised to power %ld is equal to %ld",n,p,pow(n,p));
	return 0;
}
