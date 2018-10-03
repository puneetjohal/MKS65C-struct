#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct foo {int i, char s[256];};

struct foo constructer(){
  srand( time(NULL) );
  char t[256] = {"fred, george, ron"};
  struct foo my_struct;
  my_struct.i = rand();
  my_struct.s = t[rand() % 3];
  return my_struct;
}

/*
char accessor(struct s, char c){
  return struct.c;
}
*/


int main(){
  struct sample = conStructer();
  printf("Sample struct with int and string: %d, %s\n", sample.i, sample.s);
  return 0;
}
