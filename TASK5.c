#include <stdio.h>
#include <string.h>

int main() {
    int pizza, crust_type;
    float total = 0; 
    char cheese;
    printf("Do you want extra cheese?(Y/N)\n");
    scanf(" %c", &cheese);  
    if (cheese == 'Y' || cheese == 'y') {
        total += 1.5;
    }
    
    printf("The new cost is %.2f$\n",total);

    return 0;
}
