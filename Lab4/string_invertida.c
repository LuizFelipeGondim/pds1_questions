#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(){

  char s1[SIZE];
  int i;

  fgets(s1, SIZE, stdin);

  s1[strcspn(s1, "\n")] = '\0';

  for(i = SIZE-1; i >= 0; --i){
    printf("%c", s1[i]);
  }

  printf("\n");

  return 0;
}