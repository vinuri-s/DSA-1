#include<stdio.h>
#define n 5
int main(){
	int a[n]={1,5,2,3,4};
	int i,j,temp,flag;
	
	
	printf("Before Sorting:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n-1;i++){
		flag=0;
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
	
		}
			if(flag==0){
			break;
		}
		
	}
	
	printf("\nAfter Sorting:");
	for(i=0;i<n;i++){
		printf("\t%d\t",a[i]);
	}
	
	return 0;
}
