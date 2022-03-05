#include <stdio.h>

int main(void) {
    char order_num[2]; // 구매한 음식의 번호
    int total=0; // 전체 구매 비용
    int num; // 구매 갯수
  
    while (1) {
        printf("*******************************************************************************\n\t\t\t\t\t\t\tWelcome to Burger Queen\n*******************************************************************************\nMake your selection from the menu below :\n\t\t1. \t\tRegular hamburger \t\t\t\t2500\n\t\t2. \t\tBulgogi burger \t\t\t\t\t2800\n\t\t3. \t\tFish Sandwich \t\t\t\t\t2700\n\t\t4. \t\tHalf-pounder with cheese \t\t3500\n\t\t5. \t\tCurly fries \t\t\t\t\t1100\n\t\t6. \t\tLarge soft drink \t\t\t\t1000\n*********************************************************************************\n\t\tSelect 1, 2, 3, 4, 5, or 6 ===> ");
        scanf(" %[^\n]", order_num);

        if (order_num[1]!=0) printf("\t\twrong selection, try again\n"); // 2자리 수 이상 입력 됐을때 오류를 나타냄

        else if (order_num[0]=='1' || order_num[0]=='2' || order_num[0]=='3' || order_num[0]=='4' || order_num[0]=='5' || order_num[0]=='6') { // 정상적으로 1~6사이 값을 받았을 경우
            printf("\tHow many orders of item number %c would you like? ", order_num[0]);
            scanf("%d", &num);
            printf("\n");
            if(order_num[0]=='1') {
              total+=2500*num;
            }
            else if(order_num[0]=='2') {
              total+=2800*num;
            }
            else if(order_num[0]=='3') {
              total+=2700*num;
            }
            else if(order_num[0]=='4') {
              total+=3500*num;
            }
            else if(order_num[0]=='5') {
              total+=1100*num;
            }
            else if(order_num[0]=='6') {
              total+=1000*num;
            }
        }

        else if (order_num[0]=='Q') break; // Q를 입력 받을 시 무한 반복문에서 탈출

        else printf("\t\twrong selection, try again\n"); // 정해진 숫자와 Q를 제외한 다른 문자나 숫자를 입력 받을 시, 다시 입력시킴
    }
    
    printf("\nPlease pay %d\nThank you for eating at Burger Queen", total);

    return 0;
}