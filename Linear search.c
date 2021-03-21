#include<stdio.h>
int linear_search(int a[],int n,int key)
{
	int i;
	for(i=0;i<n;i++)
		if(key==a[i])
			break;
	return i;
}
void main()
{
	int a[]={1,2,45,7,23,4,95,5,4,23,4,58,65,4,456,35,4},key=456;
	int index=linear_search(a,17,key);
	printf("Value found at %d index",index);
}
