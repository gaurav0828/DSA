#include<stdio.h>
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 
void quick_sort(int a[],int l,int r)	//Using first element as pivot
{
	if(r>=l)
	{
	int i,j=l,pivot=a[l];
	for(i=l;i<=r;i++)
	{
		if(pivot>a[i])
			{
			j++;
			swap(&a[j],&a[i]);
			}
	}
	swap(&a[l],&a[j]);
	quick_sort(a,l,j-1);
	quick_sort(a,j+1,r);
	}
}
void main()
{
	int i,a[]={25,32,35,6,5,12,5,8,321,2,45};
	quick_sort(a,0,10);
	for(i=0;i<11;i++)
		printf("%d\n",a[i]);
	getch();
}
