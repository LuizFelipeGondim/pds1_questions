#include <stdio.h>
#include <string.h>

int main(){

  char s1[20], s2[20];

  fgets(s1, sizeof(s1), stdin);
  fgets(s2, sizeof(s2), stdin);

  s1[strcspn(s1, "\n")] = '\0';
  s2[strcspn(s2, "\n")] = '\0';

  strcat(s1,s2);

  printf("%s \n", s1);

  return 0;
}