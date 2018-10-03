#import <stdio.h>
#import <stdlib.h>
#import <time.h>

struct conStructer(){
  char s[] = "abcdefghijklmnopqrstuvwxyz";
  char t[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  srand( time(NULL) );
  int i = rand() % 27;
  struct my_type {char a, char b};
  my_type.a = *(s+i);
  my_type.b = *(t+i);
  return my_type;
}

char accessor(struct s, char c){
  return struct.c;
}

int main(){
  struct sample = conStructer();
  printf("Sample struct with two chars: %c, %c\n", accessor(s,a), accessor(s,b));
  return 0;
}
