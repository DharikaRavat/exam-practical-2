#include<stdio.h>

int main () {
	
	int n,i;
	int sum = 0;
	
	printf("Enter the number of elements in the array : ");
	scanf("%d" , &n);
	
	int arr[n];
	
    printf("Enter the number of elements in the array : ");
	    for(i = 0; i < n; i++) {
			scanf("%d" , &arr[i]);
	}
	
	    for(i = 0; i < n; i++) {
	       if(arr[i] > 0) {
	       	   sum += arr[i];
		   }
    }
    
    printf("The sum of all positive values in the array is : %d\n" , sum);
    
}
    
    
	