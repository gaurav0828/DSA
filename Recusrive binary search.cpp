#include<iostream>
using namespace std;
int rbs(int , int , int, int[]);
int main()
{
	int k,p,n,i;
	cout<<"Enter no of elements";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout <<"enter key: ";
	cin>>k;
	
	p=rbs(k,0,n,arr);
	cout<<"key found at pos="<<p; 
	return 0;

}
int rbs(int k ,int l,int h,int a[] )
{	if (l<h)
	{	
		int mid=(l+h)/2;
		if (a[mid]==k)
		return mid;
		else if(a[mid]<k)
			return rbs(k,mid+1,h,a);
			else
			return rbs(k,l,mid-1,a);
	}
	return 1;
	
}
