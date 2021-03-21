#include<stdio.h>
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}
void selection_sort(int a[],int n)
{
	int i,j,smallest;
	for(i=0;i<n-1;i++)
		{
		smallest = i;
		for(j=i+1;j<n;j++)
				if(a[j]<a[smallest])
					smallest=j;
		swap(&a[i],&a[smallest]);
		}
}
void main()
{
	int i,a[]={25,32,35,6,5,12,5,8,321,2,45};
	selection_sort(a,11);
	for(i=0;i<11;i++)
		printf("%d\n",a[i]);
}
