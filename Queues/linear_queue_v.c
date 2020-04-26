#include <stdio.h>

int is_empty(int front);
int is_full(int max,int rear);
void enqueue(int queue[],int max,int *front,int *rear);
int dequeue(int queue[],int max,int *front);
int peek(int queue[],int max,int Front);

int main(){
	int Max,Front=-1,Rear=-1,opt=0;
	printf("Number of Queue indexes : ");
	scanf("%d",&Max);
	int queue[Max] ;

	do{
		printf("_______________________________________________\n");
		printf("1.Is Empty\n2.Is Full\n3.Enqueue\n4.Dequeue\n5.Peek\n6.Front\n7.Rear\n8.Exit\nSelect a option : ");
		scanf("%d",&opt);
		printf("\n-----------------------------------------------\n");
		switch(opt){

			case 1:
				if(is_empty(Front))
					printf("Queue is Empty\n\n");
				else
					printf("Queue is not Empty.\n\n");
				break;

			case 2:
				if(is_full(Max,Rear))
					printf("Queue is full.\n\n");
				else
					printf("Queue is not Full. \n\n");
				break;
			case 3:
				enqueue(queue,Max,&Front,&Rear);
				break;
			case 4:{
				int val1= dequeue(queue,Max,&Front);
				if(val1==-1)
					printf("Queue is Empty\n");
				else
					printf("%d is deleted from queue.\n\n",val1);
				break;
				}
			case 5:
				printf("PEEK VALUE : %d\n",peek(queue,Max,Front));
				break;
			case 6:
				printf("Front ; %d\n\n",Front);
				break;
			case 7:
				printf("Rear : %d\n\n",Rear);
				break;
			case 8:
				printf("\n");
				break;
			default:
				break;
		}
	}while(opt != 8);
}

int is_empty(int front){
	if(front ==-1 || rear<front)
		return 1;
	else
		return 0;
}
int is_full(int max,int rear){
	if(rear == max-1)
		return 1;
	else
		return 0;
}
void enqueue(int queue[],int max,int *front,int *rear){
	if(is_full(max,*rear)){
		printf("Queue is Full. \n");
		return;
	}
	else if(*rear ==-1){
		*front=0;
		*rear=0;
	}
	else{
		*rear=*rear+1;
	}
	int val;
	printf("Enter a value : ");
	scanf("%d",&val);
	queue[*rear] = val;
}
int dequeue(int queue[],int max,int *front){

	if(is_empty(*front))
		return -1;
	else{
		int val =  queue[*front];
		*front=*front+1;
		return val;
	}
}
int peek(int queue[],int max,int front){
	if(is_empty(front)){
		printf("Queue UnderFlow.\n");
		return 0;
	}
	else
		return queue[front];
}
