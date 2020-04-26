#include <stdio.h>

int queue[];
int MAX,FRONT=0,REAR=0,COUNT=0,VAL,val;
int is_empty();
int is_full();
void enqueue();
int dequeue();

int main(){
	int opt=0;
	printf("How many elements in queue : ");
	scanf("%d",&MAX);
	queue[MAX];
	while(opt != 8){
		printf("______________________________________________________\n");
		printf("1.Is Empty\n2.Is Full\n3.Enqueue\n4.Dequeue\n5.Peek\n6.Front\n7.Count\n8.Exit\nSelect a Option : ");
		scanf("%d",&opt);
		printf("------------------------------------------------------\n");

		switch(opt){
			case 1:{
				if(COUNT == 0 )
					printf("Queue is Empty\n");
				else
					printf("Queue is not empty\n");
				break;}
			case 2:{
				if(COUNT == MAX)
					printf("Queue is Full.\n");
				else
					printf("Queue is not empty.\n");
				break;}
			case 3:{
				enqueue();
				break;}
			case 4:{
				if(COUNT == 0)
					printf("Queue is Empty.\n");
				else
					printf("Deleted Element in Queue is : %d.\n",dequeue());
				break;}
			case 5:{
				if(COUNT == -1)
					printf("Queue is Empty.\n");
				else
					printf("Front Element in Queue is : %d[%d]\n",queue[FRONT],FRONT);
				break;}
			case 6:{
				if(COUNT ==0)
					printf("QUEUE is Empty.\n");
				else
					printf("Front element in the queue is : %d\n",FRONT);
				break;}
			case 7:{
				printf("COUNT : %d\n",COUNT);
				break;}
			default:{
				break;}
		}
	}
}

int is_empty(){
	if(COUNT ==0)
		return 1;
	else
		return 0;
}

int is_full(){
	if(COUNT ==MAX)
		return 1;
	else
		return 0;
}

void enqueue(){
	if(is_full())
		printf("OVERFLOW ERROR\n");
	else{
		printf("Enter a Value : ");
		scanf("%d",&VAL);
		queue[REAR] = VAL;
		REAR = (REAR+1)%MAX;
		COUNT++;
	}
}

int dequeue(){
	if(is_empty())
		return -1;
	else{
		VAL = queue[FRONT];
		FRONT = (FRONT+1)%MAX;
		COUNT--;
		return VAL;
	}
}
