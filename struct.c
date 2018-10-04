#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//struct foo prototype
struct foo {char n[32]; char w[32];};

//public String arrays
char strs[10][32] = {"anakin", "luke", "leia", "han", "r2d2", "c3po", "padme", "obi-wan", "yoda", "jango"};
char wpns[6][32] = {"blue lightsaber", "green lightsaber", "red lightsaber", "purple lightsaber", "blaster", "bowcaster"};

int ary[3];

//creates an array of random numbers
void randary(){
  srand( time(NULL) );
  int i;
  for (i = 0; i < 3; i++) {
    ary[i] = rand();
}
}

//returns an example struct
struct foo construct(){
  struct foo my_struct;
  strcpy(my_struct.n, strs[ary[0] % 10]); //name
  strcpy(my_struct.w, wpns[ary[0] % 6]); //weapon
  return my_struct;
}

//prints vars in struct
void printstr(struct foo s){
  printf("%s equipped with %s\n", s.n, s.w);
}

//modifies value of struct foo.w randomly
void switchWeapon(struct foo s){
  //memset(s.w, '\0', sizeof(s.w)); //resets string
  strcpy(s.w, wpns[ary[1] % 6]);
}

//main for testing
int main(){
  struct foo sample = construct();
  printstr(sample);
  printf("--- switch weapons ---\n");
  switchWeapon(sample);
  printstr(sample);
  printf("--- switch weapons ---\n");
  switchWeapon(sample);
  printstr(sample);
  return 0;
}
