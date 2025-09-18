#include <stdio.h>
#include <string.h>

int main() {
    int total = 20; //ASSUMING THE COST IS AT 20$
    char id;
    printf("Do you have student ID?(Y/N)\n");
    scanf("%c", &id);  
    if (id == 'Y' || id == 'y') 
    {
        total -= 2;
            printf("The new cost is %.2d$\n",total);
    }
    else if (id == 'N' || id == 'n')
   { 
    printf("The the cost will remain the same : %.2d$\n",total);
   }
    return 0;
}