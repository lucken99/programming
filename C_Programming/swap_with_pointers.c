//Swapping two numbers using pointer

#include <stdio.h>

long swap(long*, long*);

int main(void) {
    
	long num1, num2;
	
	printf("Enter two numbers: ");
	scanf("%ld %ld", &num1, &num2);
	
	printf("\nBefore Swapping: Num1 = %ld, Num2 = %ld", num1, num2);
	
	swap(&num1, &num2);
	
	printf("\nAfter Swapping:  Num1 = %ld, Num2 = %ld", num1, num2);
	
	return 0;
}

long swap(long *a, long *b) {
	
    long temp;
    temp = *b;
    *b = *a;
    *a = temp;   
}       

