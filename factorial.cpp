#include<iostream>
using namespace std;
int fact(int n)
{
	if (n==0)
	return 1;
	else 
	return n*fact(n-1);
	
}
int main()
{
	int n;
	cout <<"enter no: ";
	cin>>n;
	cout<<"factorial of "<<n<<" natural no. is "<<fact(n);
	return 0;
}
