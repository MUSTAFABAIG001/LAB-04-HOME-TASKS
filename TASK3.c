#include<stdio.h>
int main()
{
    int pizza;
    printf("How many pizzas do you want? 1,2 or 3?\n");
    scanf("%d", &pizza);
    if (pizza==1)
    {
        printf("the cost for %d pizza is 8$\n",pizza);
    }
    else if(pizza==2)
    {
        printf("the cost for %d pizzas is 15$",pizza);
    }
    else if(pizza==3)
    {
        printf("the cost for %d pizzas is 21$",pizza); 
    }
    else 
    return 0;
}