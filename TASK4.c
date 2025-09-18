#include <stdio.h>

int main()
 {
    int crust;
    float total = 8; 

    printf("Choose crust. Enter the respective number\n1. Regular $0\n2. Thin $1\n3. Stuffed $2\n ");
    scanf("%d", &crust);

    if (crust == 1)
        total += 0;
    else if (crust == 2)
        total += 1;
    else if (crust == 3)
        total += 2;
    else {
        printf("Invalid crust.\n");
        
    }

    printf("\ntotal cost: $%.2f\n", total);
    return 0;
}