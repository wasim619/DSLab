#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10

int stack[MAX_SIZE],front=-1,rear=-1;

int isFull(){
	//returns 1 if stack is full else returns -1
	return rear==MAX_SIZE-1;
	
}

int isEmpty(){
			if(front==-1 & rear==-1){
//returns 1 if stack is empty else returns -1
	return to-1;
	
}
}

void display()
{
		printf("the element of the queue are"): 
		for(i=front;i<=rear;i++)
		{
		printf("\n%d",q[i]);
		}
}

void insert(int d)
{
		if(!isFull)
		{
		if(isEmpty)
		{
		front++;
		rear++;
		queue[rear]=d;
		}
		else
		printf("THE queue is Full element cannot be inserted ");
		}
}
void delete()
{
		int d;
		if(!isEmpty)
		{
		d=queue[front];
		if(front==rear)
		front=rear=-1;
		else
		front++;
		printf("the element deleted is %d",d);
		}
		else
		printf("the queue is empty");
}
		


int main(){
	int choice,e;
	do
	{
		//display menu 1.peek 2.push 3.pop 4.exit
		printf("\nEnter\n1.Display\n2.Insert\n3.Delete\n4.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);	//take input in choice variable
		switch(choice){
			case 1:
				if(!isEmpty)
				display();
				else
				printf("\nThe queue is empty");
				break;
			case 2:
				printf("\nEnter the elment to be inserted: ");
				scanf("%d",&e);
				insert(e);//call insert function
				break;
			case 3:
				delete();//call delete function
				break;
			case 4:
				exit(0);//call exit(0) function or return 0
				break;
			default:
				printf("\nInvalid Choice");//invalid choice
				break;				
		}
	}while(1);
	return 0;
}
