#include<stdio.h>
#include<conio.h>
int max(int a[],int j)
{
	int max=0,i;
	for(i=0;i<j;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	return max;
};
void sort(int a[],int j)
{
	int p,q,i,k=0;
	p=max(a,j);
	int arr[p];
	for(i=0;i<=p;i++)
	{
		arr[i]=0;
	}
	for(i=0;i<j;i++)
	{
		arr[a[i]]++;
	}
	for(i=0;i<=p;i++)
	{
		while(arr[i]>0)
		{
			a[k]=i;
			k++;
			arr[i]--;
		}
	}
};
int main()
{
	int i;
	int a[]={15,20,12,18,18,16,12,13,10,1,2,7,5,4,3};
	sort(a,15);
	printf("The values are:=");
	for(i=0;i<15;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}
