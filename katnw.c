#include<stdio.h>
#include<conio.h>
#include<string.h>

struct node
{
	int data;
	struct node *link;
};

void add_book(char,struct node *book);
void issue_book(struct node *book,char);
void return_book(char);
void display(struct node *book);
	
void main()
{
	struct node *p;
	char str[100];
	int ch;
	do
	{
		printf("1.add new book\n2.issue book\n3.return book\n4.display book list\n");
		printf("\nenter your choice:");
		printf("%d", ch);
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
				printf("add book");
				
				break;
		case 2:
				printf("issue book");
				break;
		case 3:
				printf("return book");
				break;
		case 4:
				printf("display book");
				break;
		default:
				printf("wrong choice");
				break;
		}		
	}while(ch!=4);
}
	
	
	
	
void add_book(char book_name,struct node *book)
{
	char author_name;
	int edition;
	printf("enter book name: ");
	scanf("%s",&book_name);
	printf("enter author name:");
	scanf("%s",&author_name);
	struct node *temp,*r;
		if(*book==NULL)
		{
			temp=malloc(sizeof(struct node));
			temp->data=book_name;
			temp->link=NULL;
			*book=temp;
		}
	else
		{
			temp=*book;
			while(temp->link!=NULL)
			temp=temp->link;
			r=malloc(sizeof(struct node));
			r->data=book_name;
			r->link=NULL
			temp->link=r;}
		}
}

void issue_book(struct node *book,char book_name)
{
	struct node *old,*temp;
	temp=*book;
	while(temp!=NULL)
	{
		if(temp->data==book_name)
		{
			if(temp==*book)
			*book=temp->link;
		else
			old->link=temp->link;
			free(temp);
			return;
		}
		else
		{
			old=temp;
			temp=temp->link;
		}			
	}
	printf("\n book is not available",book_name);
}

void display(struct node *book)
{
	while(book!=NULL)
	{
		printf("%s",book->data);
		book=book->link;
	}
}

	
	