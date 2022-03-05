#include <stdio.h>
#include <string.h>

int main() {
    char word[20]; // 입력받는 문자열
    char small[20]; // 사전에서 가장 먼저 나오는 문자열
    char shor[20]; // 가장 짧은 문자열
    int i=0; // 변수

    for (;;) {
        printf("Enter word : ");
        scanf(" %s", word); // 문자열 입력 받음
        if (strcmp(word,"Q")==0) break; // Q 입력 시 종료
        else if (i==0) { // 맨 처음 small과 shor를 정해줌
            strcpy(small,word); 
            strcpy(shor,word);
            i++;
        }
        else { // Q를 입력 받을때까지 문자열 비교
          if (strcmp(word,small)<0) strcpy(small,word);  // 사전 상 먼저 나오는 문자열 비교
          if (strlen(word)<strlen(shor)) strcpy(shor,word); // 가장 짧은 문자열을 비교
        }
    }

    printf("Smallest word: %s\n", small); // 사전에서 먼저 나오는 문자열 출력
    printf("Shortest word: %s\n", shor); // 가장 짧은 문자열 출력
}