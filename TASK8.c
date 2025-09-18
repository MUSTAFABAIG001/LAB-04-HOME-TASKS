#include <stdio.h>
#include <string.h>

int main() {
    int crust,Amount,Total;
        printf("Choose crust. Enter the respective number\n1. Regular $0\n2. Thin $1\n3. Stuffed $2\n ");
    scanf("%d", &crust);
    printf("Enter the amount of pizza's you want\n");
    scanf("%d", &Amount);
    if(crust==3 && Amount==3)
    {
        printf("You are elgiible for a free garlic bread\n");
    }
    return 0;
}
