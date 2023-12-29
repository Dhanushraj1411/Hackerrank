#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	int x;
	struct student *next;
}st;
void add_end(st **,st **);
void print(st *);
st *swapPairs(st *);
int main()
{
	char ch;
	st *hptr = 0,*last=0;
	do
	{
		add_end(&hptr,&last);
		printf("Do you want to continue(y/n):\n");
		scanf(" %c",&ch);
	}while(ch == 'Y'||ch == 'y');
	printf("Before SwapPairs\n");
	print(hptr);
	hptr = swapPairs(hptr);
	printf("After SwapPairs\n");
	print(hptr);
}
void add_end(st **hptr,st **last)
{
	st *new;
	new = (st *)malloc(sizeof(st));
	printf("Enter the data\n");
	scanf("%d",&new->x);
	if(*hptr == 0)
	{
		new->next = *hptr;
		*hptr = *last =  new;
	}
	else
	{
		new->next = (*last)->next;
		*last = (*last)->next = new;
	}
}
void print(st *ptr)
{
	if(ptr==0)
		printf("Nothing to print!\n");
	else
	{
		while(ptr)
		{
			printf("X : %d\tptr->next : %p\t ptr : %p\n",ptr->x,ptr->next,ptr);
			ptr = ptr->next;
		}
	}
}
st *swapPairs(st *hptr)
{
	if(hptr==0)
		return NULL;
	else if(hptr->next == NULL)
		return hptr;
	else
	{
		st *cur_node = hptr,*nxt_node = hptr->next,*temp;
		hptr = nxt_node;
		while(cur_node && nxt_node)
		{
			temp = nxt_node->next;
			nxt_node->next = cur_node;

			if(temp!=0 && temp->next==0)
			{
				cur_node->next = temp;
				return hptr;
			}
			else if(temp != 0)
			{
				cur_node->next = temp->next;
				cur_node = temp;
			}
			else
				cur_node->next = temp;
			if(cur_node->next == NULL)
				return hptr;
			else
				nxt_node = cur_node->next;
		}
	}
}
