#include <stdio.h>
#define n 5
int stack[n];
int top=-1;



void push(int x){

	printf("Enter data:");
	scanf("%d",&x);
	if(top==n-1){
		printf("overflow");
		}
		
	else{
		top++;
		stack[top]=x;
	}
}

int display(int i){
	for(i=0;i<n;i++){
		printf("%d",stack[n]);
	}
}
void main(){
	int a,b;
	push(a);
	display(b);
}
