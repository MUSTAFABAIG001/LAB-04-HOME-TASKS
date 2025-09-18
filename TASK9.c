#include <stdio.h>
#include <string.h>

int main() {
	char delivery_method[20];
	int total = 20; //ASSUMING

	printf("Do you want delivery or pickup?\n");
	scanf("%19s", delivery_method);

	if (strcmp(delivery_method, "delivery") == 0) {
		total += 3;
		printf("Total cost is: %d\n", total);
	} else {
		printf("Total cost is: %d\n", total);
	}

	return 0;
}