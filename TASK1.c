#include <stdio.h>
#include <string.h>

int main() 
{
    char slice[20];
    
    printf("Choose a pizza slice\n1.Small\n2.Medium\n3.Large\n");
    scanf("%s",&slice);
    if(strcmp(slice,"Small"))
    {
        printf("%s",slice);
    }
     else if(strcmp(slice,"Medium"))
    {
        printf("%s",slice);
    }
     else if(strcmp(slice,"Large"))
    {
        printf("%s",slice);
    }
    else
    {
        printf("Invalid size");
    }
    return 0;
}