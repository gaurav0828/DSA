#include<stdio.h>
#include<conio.h>
void deletion(int a[],int n)
{
	if(n>0)
	{
		int largest,l,r;
		int max=a[0];
		a[0]=a[n];
		for(int i=0;i<(n+1)/2;i++)
		{
			largest=i;
			l=largest*2+1;
			r=largest*2+2;
			if(l<n&&a[largest]<a[l])
				largest=l;
			if(r<n&&a[largest]<a[r])
				largest=r;
			if(largest!=i)
			{
				int temp;
				temp=a[largest];
				a[largest]=a[i];
				a[i]=temp;
			}
			else break;
		}
		a[n]=max;
		n--;
		deletion(a,n);
	}
};
manage(int a[],int n)
{
	for(int i=0;i<n/2;i++)
	{
  	int largest=i;
    int l=2*i+1;
    int r=2*i+2; 
 
    if (l<n&&a[l]>a[largest])
        largest = l;
    if (r<n&&a[r]>a[largest])
        largest = r;
    if (largest!=i)
	{
        int temp=a[i];
		a[i]=a[largest];
 		a[largest]=temp;
 		manage(a,n);
    }
    else break;
	}
}
void heapsort(int a[],int n)
{
	manage(a,n);
	printf("\n after insertion array:=\n"); 
	for(int i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	deletion(a,7);
};
int main()
{
	int a[]={5,13,48,95,12,32,62,15},i;
	printf("Array:=\n");
	for(i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
	heapsort(a,8);
	printf("\n Final array:=\n"); 
	for(int i=0;i<8;i++)
	{
		printf("%d\t",a[i]);
	}
};

