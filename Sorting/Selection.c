#include<stdio.h>
#define n 6
int main(){
	int a[n]={7,4,10,8,3,1};
	int i,j,temp,min;
	
		printf("Unsorted Array:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		
		if(min!=i){
			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
		}
	}
	
	printf("\nSorted Array:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	return 0;
}
