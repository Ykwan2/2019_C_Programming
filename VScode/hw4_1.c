#include <stdio.h>
#include <string.h>

char * reverse_string(char * str) {
  int i;
  int temp;
  int length = strlen(str);

  for(int i=0;i<length;i++){
    for(int j=0;j<length-1-i;j++){
      if (str[j]=='\n') break;
      temp = str[j];
      str[j] = str[j+1];
      str[j+1] = temp;
    }
  }
  return str;
}

int main(void) {
  char str[100];
  
  printf("문자열 입력 ");
  fgets(str,sizeof(str),stdin);
  printf("%s\n", reverse_string(str));
  return 0;
}