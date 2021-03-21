#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start = NULL;
struct node *create_node()	//Dynamic creation of a linkedlist
{
	struct node *n=malloc(sizeof(struct node));
	return n;
}
void insert_at_first(int value)	//Insertion at first
{
	struct node *n = create_node();
	n->data = value;
	n->next = start;
	start = n;
}
void insert_at_last(int value)	//Insertion at last
{
	if(start==NULL)
	insert_at_first(value);
	else
	{
	struct node *n = create_node();
	struct node *temp;
	temp = start;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	n->data=value;
	n->next=NULL;
	temp->next=n;
	}
}
void insert_at_loc(int value)	//Insertion at loc
{
	int i=2,loc;
	struct node *n = create_node();
	struct node *temp;
	temp=start;
	printf("Enter the loc:-");
	scanf("%d",&loc);
	int l=getlength();
	if(loc>l+1||loc<1)
	printf("Invalid input");
	else if(loc==1)
	insert_at_first(value);
	else if(loc==l+1)
	insert_at_last(value);
	else
	{
		while(i<loc)
		{
			temp=temp->next;
			i++;
		}
		n->data=value;
		n->next=temp->next;
		temp->next=n;
	}
}
void delete_at_first()	//Deletion at first
{
	if(start==NULL)
	printf("Linked list is empty\n");
	else
	{
	struct node *temp;
	temp=start;
	start=start->next;
	free(temp);
	}
}
void delete_at_last()	//Deletion at last
{
	if(start==NULL)
	printf("Linked list is empty\n");
	else
	{
	struct node *temp;
	temp = start;
	while(temp->next->next!=NULL)
		temp=temp->next;
	free(temp->next);
	temp->next=NULL;
	}
}
void delete_at_loc()	//Deletion at loc
{
	
	int i=2,loc;
	struct node *temp,*n;
	temp=start;
	printf("Enter the loc:-");
	scanf("%d",&loc);
	int l=getlength();
	if(loc>l+1||loc<1)
	printf("Invalid input");
	else if(loc==1)
	delete_at_first();
	else if(loc==l+1)
	delete_at_last();
	else
	{
		while(i<loc)
		{
			temp=temp->next;
			i++;
		}
		n=temp->next;
		temp->next=temp->next->next;
		free(n);
	}
}
void display()	//display funcion
{
	if(start==NULL)
	printf("Linked list is empty\n");
	else
	{
	struct node *temp;
	temp=start;
	while(temp!=NULL)
	{
	printf("%d\n",temp->data);
	temp=temp->next;
	}
	}
}
int getlength()	//Returns the length of linked list
{
	int count=0;
	struct node *temp=start;
	while(temp!=NULL)
	{
		temp=temp->next;
		count++;
	}
	return count;
}
void reverse()	//Reversing a linked list
{
	struct node *nex,*pre,*curr;
	pre=start;
	curr=pre->next;
	nex=curr->next;
	pre->next=NULL;
	while(nex!=NULL)
	{
	curr->next=pre;
	pre=curr;
	curr=nex;
	nex=nex->next;
	}
	curr->next=pre;
	start=curr;
	start = curr;
}
void searchnode()	//searching in linked list
{
	int flag=0;
	struct node *temp=start;
	int i=0,j;
	printf("Enter the value you want to search:=\n");
	scanf("%d",&j);
	if(start==NULL)
	printf("List is Empty");
	else
	{
	while(temp!=NULL)
	{
	i++;
	if(temp->data==j)
	{
		flag=1;
		break;
	}
	temp=temp->next;
	}
	if(flag==1)
	printf("value found at location %d\n",i);
	else
	printf("Could not find the value in linked list\n");
	}
}
void main()
{
	int choice=1;
	int value;
	printf("0.exit\n1.Insert at first\n2.Insert at last\n3.Insert at loc\n4.display\n");
	printf("5.delete at first\n6.delete at last\n7.Delete at loc\n8.Length\n9.Reverse of linked list\n10.Searching\n11.menu\n");
	insert_at_first(30);
	insert_at_first(20);
	insert_at_first(10);
	while(choice)
	{
	printf("Enter your choice:- ");
	scanf("%d",&choice);
	if(choice<=3&&choice>0)
		{
			printf("Enter the value=");
			scanf("%d",&value);
		}
	switch(choice)
	{
		case 1:
			insert_at_first(value);
			break;
		case 2:
			insert_at_last(value);
			break;
		case 3:
			insert_at_loc(value);
			break;
		case 4:
			display();
			break;
		case 5:
			delete_at_first();
			break;
		case 6:
			delete_at_last();
			break;
		case 7:
			delete_at_loc();
			break;
		case 8:
			printf("The length of linked list is:- %d\n",getlength());
			break;
		case 9:
			reverse();
			break;
		case 10:
			searchnode();
			break;
		case 11:
				{printf("0.exit\n1.Insert at first\n2.Insert at last\n3.Insert at loc\n4.display\n");
				printf("5.delete at first\n6.delete at last\n7.Delete at loc\n8.Length\n9.Reverse of linked list\n10.Searching\n11.menu\n");}
	}
	}
}


