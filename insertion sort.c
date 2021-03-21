#include<stdio.h>
void insertion_sort(int a[], int n)
{
    int i,key,j;
    for(i=1;i<n;i++)
	{
        key=a[i];
        j = i - 1;
        while(j>=0&&a[j]>key)
		{
        a[j+1]=a[j];
        j--;
        }
        a[j + 1] = key;
    }
}
void main()
{
	int i,a[]={25,32,35,6,5,12,5,8,321,2,45};
	insertion_sort(a,11);
	for(i=0;i<11;i++)
		printf("%d\n",a[i]);
}
