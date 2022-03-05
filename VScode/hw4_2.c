#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getGrade(int *sheet, int *answer) {
	int jumsu=0;
  

    for (int j=0; j<10; j++) {
        if (sheet[j]==answer[j]) jumsu++;
    }

  if (jumsu>=9) return 1;
  else if (jumsu>=7) return 2;
  else return 3;
}

int main(void) {
	int i,j;	// 반복문을 위한 변수
	int count=0;
	int count1=0;
	int count2=0;
	char name1[5][20];
	char name2[5][20];
	char name3[5][20];
	char names[5][20]={"James", "David", "Simon", "Peter", "Jason"}; // 학생 이름
	int sheet[5][10];  // 학생별 답안내용
	int answer[10]={1,2,3,4,1,2,3,4,3,2}; // 정답순서
	int grade[5];  // 학생별 등

  for (int i=0;i<5;i++) {
    printf("Enter %s's sheet >> ", names[i]);
    for (int j=0;j<10;j++) {
      scanf("%d", &sheet[i][j]);
    }
  }
  
  for (int i=0; i<5; i++) {
    grade[i]=getGrade(sheet[i],answer);
    if (grade[i]==1) {
      strcpy(name1[i], names[i]);
      count++;
    }
    if (grade[i]==2) {
      strcpy(name2[i], names[i]);
      count1++;
    }
    if (grade[i]==3) {
      strcpy(name3[i], names[i]);
      count2++;
    }
  }
  
  printf("\nGrade result\n");
  
  printf("1st :  ");
  for(int z=0; z<5; z++) printf("%s ", name1[z]);
  printf("(%d)\n", count);
  
  printf("2nd :  ");
  for(int x=0; x<5; x++) printf("%s ", name2[x]);
  printf("(%d)\n", count1);
  
  printf("Fail :  ");
  for(int k=0; k<5; k++) printf("%s ", name3[k]);
  printf("(%d)\n", count2);
 
	return 0;
}