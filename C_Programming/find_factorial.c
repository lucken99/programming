// n! = n*(n-1)*(n-2)*.......3*2*1

#include <stdio.h>

int main() {
	int num;
	unsigned long long int fact = 1;
  printf("Enter the number to find factorial: ");
	scanf("%d", &num);
	for(int i=num; i>=2; i--)
		fact *= i;
	printf("%d! = %llu", num, fact);
	return 0;
}