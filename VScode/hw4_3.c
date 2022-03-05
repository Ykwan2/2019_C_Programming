#include <stdio.h>

int main(void) {
    char order_num;
    int total=0;
    int num;
  
    while (1) {
        printf("*******************************************************************************\n\t\t\t\t\t\t\tWelcome to Burger Queen\n*******************************************************************************\nMake your selection from the menu below :\n\t\t1. \t\tRegular hamburger \t\t\t\t2500\n\t\t2. \t\tBulgogi burger \t\t\t\t\t2800\n\t\t3. \t\tFish Sandwich \t\t\t\t\t2700\n\t\t4. \t\tHalf-pounder with cheese \t\t3500\n\t\t5. \t\tCurly fries \t\t\t\t\t1100\n\t\t6. \t\tLarge soft drink \t\t\t\t1000\n*********************************************************************************\n\t\tSelect 1, 2, 3, 4, 5, or 6 ===> ");
        scanf(" %[^\n]", &order_num);
        if (order_num=='1' || order_num=='2' || order_num=='3' || order_num=='4' || order_num=='5' || order_num=='6') {
            printf("How many orders of item number %d would you like? ", order_num);
            scanf("%d", &num);
            printf("\n");
            if(order_num=='1') {
              total+=2500*num;
            }
            else if(order_num=='2') {
              total+=2800*num;
            }
            else if(order_num=='3') {
              total+=2700*num;
            }
            else if(order_num=='4') {
              total+=3500*num;
            }
            else if(order_num=='5') {
              total+=1100*num;
            }
            else if(order_num=='6') {
              total+=1000*num;
            }
        }
        else if (order_num=='Q') break;
        else printf("wrong selection, try again");
    }
    printf("\nPlease pay %d\nThank you for eating at Burger Queen", total);

    return 0;
}
