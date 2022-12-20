#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i;
	for (i = 1; i <= 10; i++) {
		int x = rand() % 20 + 1;
		int y = rand() % 20 + 1;
		int z = rand() % 4;
		int a=0;

		printf("[%d/10]", i);

		if (z == 0) {
			printf("%d - %d =", x, y);
			scanf_s("%d", &a);
			if (a == x - y)
				printf("Correct!\n");
			else
				printf("Wornd! Answer is %d\n", x - y);

		}

		if (z == 1) {
			printf("%d + %d =", x, y);
			scanf_s("%d", &a);
			if (a == x + y)
				printf("Correct!\n");
			else
				printf("Wornd! Answer is %d\n", x+ y);

		}
		if (z == 2) {
			printf("%d * %d =", x, y);
			scanf_s("%d", &a);
			if (a == x * y)
				printf("Correct!\n");
			else
				printf("Wornd! Answer is %d\n", x * y);

		}

		if (z == 3) {
			printf("%d / %d =", x, y);
			scanf_s("%d", &a);
			if (a == x / y)
				printf("Correct!\n");
			else
				printf("Wornd! Answer is %d\n", x / y);

		
		}
	}
	
}