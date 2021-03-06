#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//struct foo prototype
struct foo {char n[32]; char w[32];};

//public String arrays
char strs[10][32] = {"anakin", "luke", "leia", "han", "r2d2", "c3po", "padme", "obi-wan", "yoda", "jango"};
char wpns[6][32] = {"blue lightsaber", "green lightsaber", "red lightsaber", "purple lightsaber", "blaster", "bowcaster"};

//returns an example struct
struct foo construct(){
  struct foo my_struct;
  strcpy(my_struct.n, strs[rand() % 10]); //name
  strcpy(my_struct.w, wpns[rand() % 6]); //weapon
  return my_struct;
}

//prints vars in struct
void printstr(struct foo * s){
  printf("%s equipped with a %s\n", s->n, s->w);
}

//modifies value of struct foo.w
void changeWeapon(struct foo * s){
  strcpy(s->w, ""); //resets string
  strcpy(s->w, wpns[rand() % 6]);
}

//main for testing
int main(){
  srand( time(NULL) );
  struct foo sample = construct();
  struct foo * p = &sample;
  printstr(p);
  printf("--- change weapon ---\n");
  changeWeapon(p);
  printstr(p);
  printf("--- change weapon ---\n");
  changeWeapon(p);
  printstr(p);
  return 0;
}
