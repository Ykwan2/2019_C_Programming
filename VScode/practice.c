#include <stdio.h>

int sum(int n) {
  int result;
  if (n==1) return 1;
  result=n+sum(n-1);
  return result;
}


int main() {
  int result;
  result=sum(10);
  printf("At the end, return value is %d\n", result);
}