#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


struct foo {char n[32]; char w[32];};

struct foo construct(){
  srand( time(NULL) );
  char strs[10][32] = {"anakin", "luke", "leia", "han", "r2d2", "c3po", "padme", "obi-wan", "yoda", "jango"};
  char wpns[6][32] = {"blue lightsaber", "green lightsaber", "red lightsaber", "purple lightsaber", "blaster", "bowcaster"};
  struct foo my_struct;
  strcpy(my_struct.n, strs[rand() % 10]); //name
  strcpy(my_struct.w, wpns[rand() % 6]); //weapon
  return my_struct;
}

void printstr(struct foo s){
  printf("%s equipped with %s\n", s.n, n.w);
}



int main(){
  struct foo sample = construct();
  printstr(sample);
  return 0;
}
