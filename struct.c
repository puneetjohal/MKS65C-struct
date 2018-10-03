#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct foo {char s[32]; int i;};

struct foo construct(){
  srand( time(NULL) );
  char strs[10][32] = {"anakin", "luke", "leia", "han", "r2d2", "c3po", "padme", "obi-wan", "yoda", "jango"};
  struct foo my_struct;
  my_struct.i = rand();
  my_struct.s = strs[rand() % 10];
  return my_struct;
}

/*
char accessor(struct s, char c){
  return struct.c;
}
*/


int main(){
  struct foo sample = construct();
  printf("Sample struct with string and int: %s, %d\n", sample.s, sample.i);
  return 0;
}
