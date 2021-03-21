#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *pre,*link;
	
};
struct node *START =NULL;
struct node * createnode();
void insertnode();
void deletenode();
void viewlist();
void insertatfirst();
int getlength();
void insertatposition();
void deletenodeatlast();
void deleteatposition();
struct node * createnode()
{
	struct node *n;
	n=malloc(sizeof(struct node));
	return(n);
	
}
void insertnode()
{
	struct node *temp ,*t;
	temp=createnode();
	printf("Enter data in node\n");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)
	 START=temp;
	else
	{
		t=START;
		while(t->link!=NULL)
		 {
		 	t=t->link;
		 }
		t->link=temp; 
	}
}
void deletenode()
{
	 if(START==NULL)
	   printf("list is empty");
	 else
	  {
		struct node *q;
		q=START;
		START=START->link;
		free(q);
		printf("Delete Successful");
	  }  
}
void viewlist()
{
	struct node *t;
	if(START==NULL)
	printf("No list is there");
	else 
	{
		t=START;
		while(t!=NULL)
		{
			printf(" %d ",t->info);
			t=t->link;
			
		}
	}
}
void deletenodeatlast()
{
	struct node *t,*q;
	int p=getlength();
 if(START==NULL)
	printf("No list is there");
 else if(p==1)
 {
 	deletenode();
 }
 else
	{
		t=START;
		q=NULL;
		while((t->link)!=NULL)
		{
			q=t;
			t=t->link;	
		}
		free(t);
		q->link=NULL;
		printf("Delete Successful");
	}
}
int getlength()
 {
	struct node *t;
	int count=0;
	if(START==NULL)
	printf("No list is there");
	else 
	{
		t=START;
	while(t!=NULL)
		{
			count+=1;
			t=t->link;	
		}
	return(count);
    }
 }
void insertatposition()
{
int pos,i=1;
struct node *t,*newnode;
 if(START==NULL)
	{
	printf("List is empty!!!");
    }
 else
 { 
 printf("Enter position after which new node is to be inserted:= ");
 scanf("%d",&pos);
if(pos>getlength())
	{
	 printf("ERROR: INVALID  INPUT !!!");
	    insertatposition();
	}
else
   {
	 newnode=createnode();
	 printf("Enter data into Node: ");
	 scanf("%d",&newnode->info);
	 newnode->link=NULL;
	if(START==NULL)
	{
	START=newnode;
	}
	else
	 {
	t=START;
	while(i<pos)
  	{
	t=t->link;
	i++;
  	}
	newnode->link=t->link;
		t->link=newnode;
	 } 
   }
 }
}
void deleteatposition()
{
int pos,i=1;
struct node *t,*q;
 if(START==NULL)
	{
	printf("List is empty!!!");
    }
 else
 { 
 printf("Enter position after which node is to be deleted:= ");
 scanf("%d",&pos);
if(pos>getlength())
	{
	 printf("ERROR: INVALID  INPUT !!!\n");
	    deleteatposition();
	}
else if(pos==1)
{
	deletenode();
}
else
   {
	t=START;
	q=NULL;
	while(i<pos)
  	{
  	q=t;
	t=t->link;
	i++;
  	}
	q->link=t->link;
	free(t);
	printf("Delete successful!!");
	} 
   }
 }

int menu()
{
	int ch;
	printf("\n*****************************************************************************************\n\n");
	printf("\n\t\t\t 1. INSERT NODE AT LAST IN LINK LIST\n");
	printf("\t\t\t 2. VIEW LIST IN LINK LIST\n");
	printf("\t\t\t 3. DELETE NODE AT FIRST IN LINK LIST\n");
	printf("\t\t\t 4. INSERT AT FIRST\n");
	printf("\t\t\t 5. GET LENGTH OF LINK LIST\n");
	printf("\t\t\t 6. INSERT A NEW NODE AFTER A PARTICULAR POSITION IN LINK LIST\n");
	printf("\t\t\t 7. DELTE NODE AT LAST\n");
	printf("\t\t\t 8. DELETE AT A POSITION\n");
	printf("\t\t\t 9. EXIT\n");
	printf("\n ENTER THE CHOICE \n");
	scanf("%d",&ch);
	return (ch);		
}
void insertatfirst()
{
	struct node *newnode;
	newnode=createnode();
		printf("Enter data in node\n");
	scanf("%d",&newnode->info);
	if (START==NULL)
	START=newnode;
	else
	{
		newnode->link=START;
		START=newnode;
	}
}
void main()
{
	int k;
	while(1)
  {
	switch(menu())
	{
		case 1:
			insertnode();
			break;
		case 2:
			viewlist();
			break;
		case 3:
			deletenode();
			break;
		case 4:
			insertatfirst();
			break;
		case 5:
			k=getlength();
			printf("Length of LINK LIST is %d",k);
			break;
		case 6:
			insertatposition();
			break;
		case 7:
			deletenodeatlast();	
			break;
		case 8:
			deleteatposition();	
			break;
		case 9:
			exit(0);	
			break;
		default:
		 printf("Chal Nikal Yahan se!!");	
	}
  }
}
