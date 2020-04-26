#include<stdio.h>
#define n 6
int main(){
	int a[n]={5,4,10,1,6,2};
	int i,j,temp;
	
	printf("Before sorting:");
	for(i=0;i<n;i++){
		printf("\t%d\t",a[i]);
	}
	
	
	for(i=1;i<n;i++){
		temp=a[i];
		j=i-1;
		
		while(i>=0 && a[j]>temp){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("\nAfter sorting:");
	for(i=0;i<n;i++){
		printf("\t%d\t",a[i]);
	}
}
