#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student { // 학생들 구조체 선언
  char name[10];
  char score[10];
};

int main() {
    struct Student *a[20]; // 학생들 메인에서 선언
    char name[10]; // 입력받는 학생 이름

    FILE *ap; // 파일 불러오기
    ap=fopen("input5.txt", "r");
    for (int i=0; i<20; i++) {
      a[i]=(struct Student *)malloc(sizeof(struct Student)); // 학생들 구조체 동적할당
      fscanf(ap, "%s", a[i]->name); // 학생 이름 가저옴
      fscanf(ap, " %s", a[i]->score); // 학생 점수 가져옴
    }
    fclose(ap); // 파일 닫음

    printf("What is student’s name? : ");
    scanf(" %s", name); // 학생 이름 입력
    for (int i=0; i<20; i++) {
      if (strcmp(name,a[i]->name)==0) { // 입력 받은 학생 이름을 가져온 파일 학생들 정보와 비교
        printf("%s's score is %s\n", a[i]->name, a[i]->score); // 같은 시 이름과 점수를 출력
        break;
      }
    }
}