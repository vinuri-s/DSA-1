#include <stdio.h>

#define max 10
int queue[max];
int front,rear = -1;

void enqueue(int val){
  if(rear == max-1){
    printf("Queue Overflow\n");
  }
  else{
    if(front == -1){
      front++;
    }
    queue[++rear] = val;
  }
}

int dequeue(){
  if(front == -1){
    printf("Queue Underflow\n");
  }
  int value = queue[front++];
  if(front>rear){
    front = -1;
    rear=-1;
  }
  return value;
}

int main(){
  int num,rem;
  printf("Enter a Number: ");
  scanf("%d", &num);

	int i;
  for(i=0; i<5; i++){
    rem = num%10;
    num = num/10;
    enqueue(rem);
  }
int j;
  for(j=0; j<5; j++){
    printf("%d", dequeue());
  }
}
