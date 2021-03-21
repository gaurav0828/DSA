#include<stdio.h>
#include<conio.h>
#include<time.h>
int fib(int n)
{
	if(n<=1)
	return n;
	else
	return(fib(n-2)+fib(n-1));
};
int main()
{
	clock_t start=clock();
    printf("value is:= %d \n",fib(50));
    clock_t stop = clock();
    printf("Elapsed: %f seconds\n", (double)(stop - start) / CLOCKS_PER_SEC);
}
