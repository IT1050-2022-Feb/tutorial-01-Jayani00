/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

    int x;
	  int c;
	  float total;
	  float avg; 
	
	printf("enter subject 1 mark ");
	scanf("%d",&x);
	printf("enter subject 2 mark ");
	scanf("%d",&c);
	
	total=x+c;
	avg=total/2.0;
	printf("average is %.2f ",avg);
	
  return 0;
}

