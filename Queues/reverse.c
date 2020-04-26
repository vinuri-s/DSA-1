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
  int num,rev;

  printf("Enter reverse point : ");
  scanf("%d", &rev);

  int arr[rev];
  int i;

  for(i=0; i<rev; i++){
    printf("Enter number %d: ",i+1);
    scanf("%d", &num);
    arr[i] = num;
  }
int k;
  for(k=rev-1; k>=0; k--){
    enqueue(arr[k]);
  }
int l;
  for(l=rev; l<10; l++){
    printf("Enter number %d: ",l+1);
    scanf("%d", &num);
    enqueue(num);
  }
int j;
  for(j=0; j<10; j++){
    printf("%d  ",dequeue());
  }

}
