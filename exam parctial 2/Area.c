#include<stdio.h>

int main () {
	
	float l, h, area;
	
	printf("Enter the length of triangle : ");
	scanf("%f" , &l);
	
	printf("Enter the height of triangle : ");
	scanf("%f" , &h);
	
	area = l*h / 2;
	
	printf("The area of triangle is : %.2f", area);
}