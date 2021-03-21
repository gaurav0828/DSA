#include<stdio.h>
#include<conio.h>
void binarysearch(int arr[],int n,int key)
{
	int mid,l=0,r=n-1,flag=0;
	while(l<=r)
    {
    	mid=(l+r)/2;
    	if(arr[mid]==key)
    	{
    		flag=1;
    		break;
		}
    	else if(arr[mid]>key)
    	r=mid-1;
    	else
    	l=mid+1;
	}
	if(flag==1)
	printf("value found at %d index",mid);
	else
	printf("Value not found");
}
void main()
{
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    binarysearch(arr,15,13);
}
