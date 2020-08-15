#include<stdio.h>

int main() {
	int num;
	int sum = 0;
	printf("<<Multiples of 3 and 5>>\n");
	scanf("%d",&num);
    printf("the natural numbers below %d that are multiples of 3 or 5, we get ",num);
	for (int i = 1; i < num ; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			sum = sum + i;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("The sum of all the multiples of 3 or 5 below %d is %d.", num, sum);
}