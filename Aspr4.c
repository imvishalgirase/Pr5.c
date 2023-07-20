#include<stdio.h>
main(){
	
	int i, j, fst[3][3], scnd[3][3], sum[3][3];
	
	printf("Enter values of 1st Matrix\n");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("Enter value [%d][%d] : ",i,j);
			scanf("%d",&fst[i][j]);
		}
	}
	printf("Enter values of 2nd Matrix\n");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			printf("Enter value [%d][%d] : ",i,j);
			scanf("%d",&scnd[i][j]);
		}
	}
	printf("\n\n Sum of Matrices \n\n");
	for(i=0 ; i<3 ; i++){
		for(j=0 ; j<3 ; j++){
			
			sum[i][j] = fst[i][j] + scnd[i][j];
			printf("%d\t",sum[i][j]);
			
		}
		printf("\n");
	}
		
}
