#include<stdio.h>
#include<conio.h>
void TOH(char s,char a,char d,int n)
{
	if(n==1)
	{
	printf("Move disk 1 from %c to %c\n",s,d);	//Moving the first disk from source to destination
	return;
	}
	TOH(s,d,a,n-1);					//Moving the 2nd disk from source to auxilary
	printf("Move disk %d from %c to %c\n",n,s,d);		//moving the first disk from source to destination
	TOH(a,s,d,n-1);				//Moving the 2nd disk from auxilary to destination
}
void main()
{
	TOH('A','B','C',5);
}
