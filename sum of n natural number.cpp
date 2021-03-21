#include<iostream>
using namespace std;
int sum(int n)
{
	if (n>0)
	 return n+sum(n-1);
	return 0;
}
int main()
{
	int n;
	cout <<"enter no: ";
	cin>>n;
	cout<<"sum of "<<n<<" natural no. is "<<sum(n);
	return 0;
}
