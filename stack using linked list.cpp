#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct stack
{	int size;
	struct node *list ;
};
struct stack* createstack()
{
	struct stack* s;
	s=(struct stack*)malloc(sizeof(struct stack));
	s->size=0;
	s->list=NULL;
	return(s);
	
}
struct stack* push(struct stack* s,int i)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->info=i;
	if(s->size==0)
	{
	newnode->next=NULL;
	s->list=newnode;
	s->size++;
	}	
	else
	{
	newnode->next=s->list;
	s->list=newnode;
	s->size++;
	}
	printf("Data pushed to stack\n");
	return s;
}
struct stack* pop(struct stack* s)
{
if(s->size==0)
	   printf("list is empty");
	else
	{
		struct node *q;
		q=s->list;
		s->list=s->list->next;
		printf("popped %d from stack\n",q->info);
		free(q);
		s->size--;
	}  
return s;
}
void traverse(struct stack *s)
{
	struct node *t;
		if((s->size)==0)
		printf("Stack is empty\n");
	else 
	{
		t=s->list;
		while(t!=NULL)
		{
			printf("%d\n",t->info);
			t=t->next;
			
		}
	}
}
void peek(struct stack *s)
{
	if(s->size==0)
	{
	printf("Stack is empty\n");
	}
	else
	printf("peek value of stack = %d\n",s->list->info);
}
int main()
{
	int ch,i,cap;
	struct stack* s;
	s=createstack();	
	while(1)
	{
		printf("\t1.push item into stack\n");
		printf("\t2.pop item from stack\n");
		printf("\t3.Transverse/view data in stack\n");
		printf("\t4.Get Peek Value\n");
		printf("\t5.Exit\n");
		printf("----------------------------------------------------------------");
		printf("\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter data : ");
				scanf("%d",&i);
				s=push(s,i);
				break;
				
			case 2:
				if(s->size==0)
				{
					printf("Stack is empty\n");break;
				}
				else
				{
				s=pop(s);
				break;
				}	
			case 3:
				traverse(s);
				break;
			case 4:
				peek(s);
				break;
			case 5:
				exit(0);
				break;
			default:
				break;					
		}
	}
return 0;	
}
