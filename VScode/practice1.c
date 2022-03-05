#include <stdio.h>

typedef struct {
  int day, hr, min, sec;
} CLOCK;

void increment (CLOCK* clock);

void show (CLOCK* clock);

int main (void) {
  CLOCK clock = {30, 23, 59, 56};
  for(int i = 0; i < 6; ++i) {
    increment (&clock);
    show (&clock);
  } 
  return 0;
}

void increment (CLOCK* clock) {
  (clock->sec)++;
  if (clock->sec == 60){
    clock->sec = 0;
    (clock->min)++;
    if (clock->min == 60){
      clock->min = 0;
      (clock->hr)++;
      if (clock->hr == 24) {
        clock->hr = 0;
        (clock->day)++;
        if (clock->day>30) clock->day=1;
      }
    }
  }
}

void show (CLOCK* clock) {
  printf("%02d:%02d:%02d:%02d\n", clock->day,
  clock->hr, clock->min, clock->sec);
}