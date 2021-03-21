#include<stdio.h>
#include<conio.h>
void radixsort(int a[],int p,int d)
{
	int i,pass,div=1,nod,j,nub[10],arr[10][10];
	pass=nod(a);
	for(pass=0;pass<nod;pass++)
	{
		for(i=0;i<10;i++)
		{
		nub[i]=0;
		}
		for(i=0;i<6;i++)
		{
		k=(a[i]/div)%10;
		arr[k][nub[k]++]=a[i];
		}
		
	div=div*10;
	}
}
int nod(a[])
{
	int i,max=a[0],count;
	for(i=1;i<5;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	while(max>0)
	{
		max=max/10;
		count++;
	}
	return count;
}
int main()
{
	int a[]={66,98,105,61,54,136};
	for(i=0;i<6;i++)
	{
		printf("%d\n",a[i]);
	}
	radixsort(a,num,10)
}
