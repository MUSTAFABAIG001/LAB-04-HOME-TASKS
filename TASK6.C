#include <stdio.h>

int main()
 {
    int time;
    int total = 20; 
    int discounted_rate;

    printf("Enter current time in 24 hour format (0-24): \n");
    scanf("%d", &time);

    if (time >= 11 && time <= 14)
	 {
        discounted_rate = total - (total * 0.10);
        printf("You are applicable for discount, Discounted rate is is: $%.2d\n", discounted_rate);
    } 
	else 
	{
        printf("You are not applicable for discount, You will pay  $%.2d\n", total);
    }

    return 0;
}
