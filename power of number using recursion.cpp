#include<stdio.h>
using namespace std;
long int pow(long int n,long int m)
{
	if (m==0)
	 return 1;
	else
	return pow(n,m-1)*n;
	
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
