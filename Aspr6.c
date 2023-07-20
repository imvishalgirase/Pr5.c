#include<stdio.h>
main(){
	
	int arr[10][10];
	int i,j,m,n,a=0,sum=0;
	
	printf("Enter the order of a square Matrix : ");
	scanf("%d",&m);
	printf("Enter the order of a square Matrix : ");
	scanf("%d",&n);
	
	if(m==n){
		printf("Enter values of Matrix : \n");
		for(i=0 ; i<m ; i++){
			for(j=0 ; j<n ; j++){
				printf("Element [%d][%d]\n",i,j);
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=0 ; i<m ; i++){
			for(j=0 ; j<n ; j++){
				printf("%d\t",arr[i][j]);
			}
			printf("\n");
		}
		for(i=0 ; i<m ; i++){
			sum = sum + arr[i][i];
		}
		printf("The sum of the diagonal elements is %d",sum);
	}
	else{
		printf("the given order is not a square matrix");
	}
	
}
