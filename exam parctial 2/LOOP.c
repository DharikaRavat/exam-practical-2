#include<stdio.h>

int main () {
	 int i,j;
	 
	 for(i = 0; i < 5; i++) {
	 	
		 for(j = 0; j < 5 - i; j++){
		 	printf("%d ", 5 * (j + 1));
		 }
		 
		 printf("\n");
		 
	}
	
}
	 