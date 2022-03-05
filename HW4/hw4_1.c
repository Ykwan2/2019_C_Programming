#include <stdio.h>
#include <string.h>

char * reverse_string(char * str) { // 입력 받은 문자열을 반대로 돌리는 함수
  int i; //반복문 변수
  int temp; // 저장 변수
  int length = strlen(str); // 입력 받은 문자열의 길이를 계산

  for(int i=0;i<length; i++){
    for(int j=0;j<length-1-i;j++){
      if (str[j]=='\n') break;
      temp = str[j];
      str[j] = str[j+1];
      str[j+1] = temp;
    }
  }
  return str;
}

int main(void) { // 문자열을 입력받고 함수를 불러 돌린 뒤, 프린트 한다. 
  char str[100];
  
  printf("문자열 입력 ");
  fgets(str,sizeof(str),stdin);
  printf("%s\n", reverse_string(str)); // 함수 부르는 곳
  return 0;
}