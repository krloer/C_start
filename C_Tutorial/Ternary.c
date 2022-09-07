#include <stdio.h>

int main() {
    double money = 40;
    double cost = 25;

    money > cost ? printf("You can afford it!\n") : printf("Sorry, you need %f more moneys :(\n", cost - money);

    // if (money > cost)
    // {
    //     printf("You can afford it!\n");
    // } else
    // {
    //     printf("Sorry, you need %f more moneys :(\n", cost - money);
    // }
    
    return 0;
}