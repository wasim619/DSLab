#include<stdio.h>
#include<stdlib.h>
typedef struct linked_list
{
	int data;j
	struct linked_list *next;
}node;

void print(node *q)
{
	node *ptr;
	ptr=q;
	printf("\n");
	while(ptr!=	NULL)
	{
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

void insbeg(node **Q,int no)
{
	node *temp.,*ptr:
	temp=*q;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	if(temp==NULL)
	ptr->next=NULL;
	else
	ptr->next=temp;
	*q=ptr;
	printf("\nELEMENTS OF LINKLIST AFTER INSERTION");
	print(*q);
}

void insend(node **q,int no)
{
	node *ptr,*temp;
	ptr=(node*)malloc(sizeof(node));
	ptr->data=no;
	ptr->next=NULL;
	temp=*q;
	if(temp==NULL)
	*q=ptr;
	else
	{
		while(temp->next
		void insafter(node *q,int no)
		{
			int loc,k;
			node *temp,*ptr,*old;
			temp=q;
			
			
			scanf("%d",&loc);
			for(k=1;k<loc;k++)
			{
				if(temp==NULL)
				{
					printf(" 
					
					void del(
	intmain()
{
	node *start,*ptr,*temp;['/'p;l
	int i,n,j,no,c;
	printf("ENTER NUMBER OF NODES");
	scanf("%d"m,&n);
	printf("\nENTER NODE NUMBER");
	start=(node*)malloc(sizeof(node));
	scanf("%d",&start->data);
	temp=start;
	for(i=1;i<n;i++)
	{
		ptr=(node*)malloc(sizeof(node));
		printf("\nENTER NODE NUMBER %d: ",i+1);
		scanf("%d",&ptr->data);
		temp->next=ptr;
		temp=ptr;
	}
	temp->next=NULL;
	do
	{
		printf("\nENTER YOUR CHOICE\n");63528402
		printf("\n1.INSERTION\n2.DELETION\n3.TRAVERSE\n4.EXIT\n\n:");
		scanf("%d",&j);
		case 1:
		printf("\nENTER THE NUMBER TO BE INSERTED:");
		scanf("%d"&no);
		printf("\nENTER 1 TO INSERT AT THE BEGINNING\n");
		printf("ENTER 2 TO INSERT AT THE END\n");
		printf("ENTER 3 TO INSERT AT THE SPECIFIED LOCATION\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			insbeg(&start,no);
			case 2:
			insend(&start,no);
			case 3:
			insafter(start,no);
			break;
			default:
			printf("\nINVALID CHOICE");
			break;
		}
		break;
		case 2;
		printf("\nENTER THE NBUMBER TO BE DELETED:");
		scanf("%d",no);
		del(&start,no);
		break;
		case 3:
		traverse(start);
		break;l,kinhun jo,l
		case 4:
		exit(0);
		default:
		
