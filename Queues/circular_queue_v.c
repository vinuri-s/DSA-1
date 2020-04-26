#include <stdio.h>
int optionner();
void enqueue(int *stack,int *count,int max,int *rear);
int dequeue(int *stack,int *count,int max,int *front);
void display(int *stack,int count,int max,int front);
int main()
{
	int Front=0,Rear=0,Count=0,Max=0,opt;
	printf("Number of Elements : \n");
	scanf("%d",&Max);
	int stack[Max];

	do
	{
		opt = optionner();

		switch(opt)
		{
			case 1:
			{
				enqueue(stack,&Count,Max,&Rear);
				break;
			}
			case 2:
			{
				dequeue(stack,&Count,Max,&Front);
				break;
			}
			case 3:
			{
				display(stack,Count,Max,Front);
				break;
			}
			case 5:
				return 0;
			default:
				printf("Invalid Input. \n");
		}
	}while(1);
	return 0;
}

int optionner()
{
	int ch;
	printf("### MAIN MENU ###\n");
	printf("1.Enqueue\n");
	printf("2.Dequeue\n");
	printf("3.Display\n");
	printf("4.Details\n");
	printf("5.Exit\n");
	printf("Enter Your Choise : \n");
	scanf("%d",&ch);
	return ch;
}

void enqueue(int *stack,int *count,int max,int *rear)
{
	if(*count == max)
		printf("Stack is Full.\n");
	else
	{	
		int val;
		printf("Enter a value : \n");
		scanf("%d",&val);
		stack[*rear] = val;
		*rear = (*rear+1)%max;
		*count = *count+1;
	}
}

int dequeue(int *stack,int *count,int max,int *front)
{
	if(*count == 0)
		printf("Stack is empty.\n");
	else
	{
		*count = *count-1;
		int val = stack[*front];
		*front = (*front+1)%max;
		return val;
	}
}

void display(int *stack,int count,int max,int front)
{
	if(count ==0)
		printf("stack is Empty.\n");
	else
	{
		printf("Elements are : ");
		for(int x=front;count >0;count--)
		{
			printf("%d ",stack[x] );
			x = (x+1)%max;
		}
		printf("\n");
	}
}
