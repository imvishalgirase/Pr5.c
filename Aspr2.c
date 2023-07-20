#include<stdio.h>
main(){
	
	int i,j,n,arr[50],lrg, lrg2nd;
	
	printf("Enter the size of Array : ");
	scanf("%d",&n);
	
	printf("Input %d elements in array\n",n);
	
	for(i=0 ; i<n ; i++){
		printf("element %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	lrg=0;
	for(i=0 ; i<n ; i++){
		if(lrg<arr[i]){
			lrg=arr[i];
			j=i;
		}
	}
	lrg2nd=0;
	for(i=0 ; i<n ; i++){
		
		if(i==j){
			i++;
			i--;
		}
		else{
			if(lrg2nd<arr[i]){
				lrg2nd=arr[i];
			}
		}
	}
	printf("The Second largest element in the array is :  %d \n\n", lrg2nd);	
}
