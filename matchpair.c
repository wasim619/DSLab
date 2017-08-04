#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100

typedef struct stack
{
	int a[MAX];
	int top;
}stack;

void push(struct stack *ps,char n)
{
	if(ps->top!=MAX-1)
	{
		ps->top++;
		ps->a[ps->top]=n;
	}
	else
		printf("\nSTACK IS FULL");
}

int pop(struct stack *ps)
{
	return(ps->a[ps->top--]);
}

void checkbalanced(char exp[])
{
int i=0;struct stack s;char c;
s.top=-1;
	while(exp[i]!='\0')
	{
		if(exp[i]=='(' ||exp[i]=='[' || exp[i]=='{')
		push(&s,exp[i]);
		else
		{
			if(s.top==-1)
			{
				printf("expression is invalid");
				return;
			}pop(&s);
}
			if(ismatchingpair(c,exp[i]))
			{i++;
			continue;}
			else
			{
			printf("expression invalid");
			return;
			}
}
}



int ismatching(char left,char right)
{
switch(left)
{
	case'(':
		if(right==')')
		return 1;
		else
		return 0;
case'{':
		if(right=='}')
		return 1;
		else
		return 0;
case'[':
		if(right==']')
		return 1;
		else
		return 0;
default:return 0;
}
}
int main()
{
	char exp[30];
	printf("ENTER AN EXPRESSION CONTAINING PARENTHESIS\n");
	scanf("%s",exp);
	
      checkbalanced(exp);
	return 0;
}
