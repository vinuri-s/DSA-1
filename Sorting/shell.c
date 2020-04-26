#include<stdio.h>
#define n 9
int main(){
	int a[]={23,29,15,19,31,7,9,5,2};
	int i,j,temp,gap;
	
	printf("bfter Sorting:");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	for(gap=n/2;gap>=1;gap/2){
		for(j=gap;j<n;j++){
			for(i=j-gap;i>=0;i-gap){
				if(a[i+gap]>a[i]){
					break;
				}
				else{
					temp=a[i+gap];
					a[i+gap]=a[i];
					a[i]=temp;
				}
			}
		}
	}
	
	printf("\nAfter Sorting:");
	for(gap=0;gap<n;gap++){
		printf("%d\t",a[gap]);
	}
	return 0;
}
