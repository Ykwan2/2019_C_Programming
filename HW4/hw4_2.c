#include <stdio.h>
#include <string.h>

int main(void) {
    char num[10];
    int flag=2; // 입력 받은 숫자를 어떤 경우 인지 판단하기 위한 변수

    printf("Input ? ");
    scanf("%s", num); // 숫자를 받는 곳

    for (int j=0; j<strlen(num); j++) {
        if (num[j]<48 || num[j]>57) { // ASCII 코드 이용
            flag=3;
            break;
        }
        for (int c=0; c<j; c++) {
            if (num[j]==num[c]) flag=1;
        }
    }

    if (flag==1) printf("more than once\n"); // 한번 이상 겹치는 숫자가 있을 시
    else if (flag==2) printf("just once\n"); // 겹치는 숫자가 없을 시
    else printf("Error, wrong input\n"); // 숫자가 입력 되지 않았을 경우

    return 0;
}