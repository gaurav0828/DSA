#include<stdio.h>
#include<conio.h>
void radixsort(int n,int a[],int p,int l)
{
	int j=l/10,m;
	if(p>0)
	{
	int base[10],b[n];
	int q,i;
	for(i=0;i<10;i++)
	{
		base[i]=0;
	}
	for(i=0;i<n;i++)
	{
		m=(a[i]%l)/j;
		base[m]++;
	}
	for(i=1;i<10;i++)
	{
		base[i]=base[i]+base[i-1];
	}
	for(i=n-1;i>=0;i--)
	{
		m=(a[i]%l)/j;
		base[m]--;
		b[base[m]]=a[i];
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	l=l*10;
	p--;
	radixsort(15,a,p,l);
	}
};
int countdigit(int a[])
{
	int count=0,max=a[0],flag=0,j=10,i;
	for(i=1;i<15;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	while(flag==0)
	{
		if(j>max)
		{
			flag=1;
		}
		count++;
		j=j*10;
	}
		printf("There are %d digits in maximum number.\n",count);
	return count;
}
int main()
{
	int a[15]={155,3,245,214,0,526,6754,896,452,321,526,215,249,546,235};
	int count,flag=0,i;
	count=countdigit(a);
	radixsort(15,a,count,10);
	printf("Values are:=");
	for(i=0;i<15;i++)
	{
		printf("\n%d",a[i]);
	}
}
