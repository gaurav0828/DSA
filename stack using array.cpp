#include<stdio.h>
#include<stdlib.h>
struct arraystack
{
	int top;
	int capacity;
	int *array;
};
struct arraystack* createstack(int);
struct arraystack* createstack(int cap)
{
	struct arraystack* stack;
	stack=(struct arraystack*)malloc(sizeof(struct arraystack));//malloc returns void * which is type casted into  arraystack*
	stack->top=-1;
	stack->capacity=cap;
	stack->array=(int*)malloc(sizeof(int)*cap);//jitni capacity di hai utne integer block bnjaane chaiye_array ke first element ka address store krega
	return(stack);//hum yahan global variable use nhi kr rhe kyoki wa har function use krsakta haai aur koi bhi function use corrupt kr skta hai
	
}
int isfull(struct arraystack* stack)//overflow condition if condition is true cant use push operation
{
	if((stack->top)==((stack->capacity)-1))
	return 1;//true- is in overflow condition
	else 
	return 0;
}
int isempty(struct arraystack* stack)
{
	if((stack->top)==(-1))//underflow-cant use pop operation
	return 1;//1-true is in underflow condition
	else 
	return 0;
}
void push(struct arraystack* stack,int item)
{
	if(!isfull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(struct arraystack* stack)
{int item;
	if(!isempty(stack))
	{
	item=stack->array[stack->top];
	stack->top--;
	return(item);
	}
	return -1;
	
}
int peek(struct arraystack *stack)
{
	if(!isempty(stack))
	{
	return(stack->array[stack->top]);
	}
	return -1;
}
void traverse(struct arraystack *stack)
{
	int i;
	if(stack->top==-1)
	printf("Stack is empty\n");
	else
	printf("Stack elements are : \n");
	for(i=stack->top;i>=0;i--)
	{
	printf("%d\n",stack->array[i]);	
	} 	
}
int main()
{	int c,i;
	struct arraystack *stack;
	stack=createstack(3);
	printf("\n-------------------------------------------------------------------------------------\n");		
	printf("\t\t1.Push item in stack\n");
	printf("\t\t2.Pop item in stack\n");
	printf("\t\t3.Exit\n");
	printf("\t\t4.Get peek value in stack\n");
	printf("\t\t5.Traverse item in stack\n");
	printf("\n-------------------------------------------------------------------------------------\n");
	while(1)
	{
	
	printf("Enter the Choice : ");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				if(isfull(stack))
				printf("\nStack is in overflow condition\n");
				else
				{
					printf("Enter value for stack : ");
					scanf("%d",&i);
					push(stack,i);
				}
				break;
			case 2:
				i=pop(stack);
				if(i==-1)
				printf("\nStack is empty\n");
				else
				printf("popped %d from stack\n",i);
				break;
			case 3:
				exit(0);
				break;
			case 4:
				i=peek(stack);
				if(i=-1)
				printf("Stack is empty");
				else
				printf("Peek Value is %d\n",i);
				break;
			case 5:
				traverse(stack);
				break;
			default:
				break;					
		}
	}
	return 0;
}
