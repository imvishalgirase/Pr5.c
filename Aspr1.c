#include<stdio.h>

main(){

	int a[100],i,n;
	
	printf("Enter size of the array : ");
	scanf("%d",&n);
	
	printf("Enter elements in array : ");
	for(i=0 ; i<n ; i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	printf("All negative alements are : ");
	for(i=0 ; i<n ; i++){
		if(a[i] < 0){
			printf("%d\n",a[i]);
		}
	}
}
