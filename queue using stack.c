#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct stack
{
	int top;
	int capacity;
	int *arr;
};
struct stack *s1=NULL;				 	
struct stack *s2=NULL;
void create_queue(int cap)			//Creation of Queue using two stack
{
	s1=malloc(sizeof(struct stack));
	s2=malloc(sizeof(struct stack));
	s1->capacity=cap;
	s2->capacity=cap;
	s1->top=0;
	s2->top=0;
	s1->arr=malloc(sizeof(int)*cap);
	s2->arr=malloc(sizeof(int)*cap);
}
int pop1()							//Removing last item from stack1
{
	int r;
	if(s1->top==0)
	printf("Queue is Empty\n");
	else
	{ 
	s1->top--;
	r=s1->arr[s1->top];
	return r;
	}
}
int pop2()							//Removing last item from stack2
{
	int r;
	s2->top--;
	r=s2->arr[s2->top];
	return r;
}
void push1(int value)	//pusing an item at last in stack1
{
	if(s1->top==s1->capacity)
		printf("Queue is full\n");
	else
	{
	s1->arr[s1->top]=value;
	s1->top++;
	}
}
void push2(int value)	//pusing an item at last in stack2
{
	s2->arr[s2->top]=value;
	s2->top++;
}
void enque()	//Enque for queue
{
	int value;
	if(s1->top==s1->capacity)
	printf("Queue is full\n");
	else
	{
	printf("Enter the value:-\n");
	scanf("%d",&value);
	push1(value);
	}
}
void deque()	//Deque for queue
{
	int t;
	int value;
	if(s1->top==0)
	printf("Queue is empty\n");
	else
	{
	while(s1->top)
	{
		push2(pop1());
	}
	value=pop2();
	printf("%d is removed\n",value);
	for(t=s2->top-1;t>=0;t--)
		push1(pop2());
	}
}
void display()
{
	if(s1->top==0)
	printf("Quue is Empty\n");
	else
	{
	int t;
	for(t=s1->top;t>0;t--)
		printf("%d\n",s1->arr[t-1]);
	}
}
void main()
{
	int choice=1;
	int cap;
	printf("enter the capacity for Queue:-\n");
	scanf("%d",&cap);
	create_queue(cap);
	printf("\n****LIST****\n\n1.enque\n2.deque\n3.display\n4.exit\n");
	while(choice!=4)
	{
		printf("Enter your choice:-\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				enque();
				break;
			case 2:
				deque();
				break;
			case 3:
				display();
				break;
			default:
				printf("Enter correct input\n");
		}
	}
}
