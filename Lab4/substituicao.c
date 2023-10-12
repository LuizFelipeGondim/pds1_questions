#include <stdio.h>
#include <string.h>
#define SIZE 20

int main(){

  char s[SIZE], c1, c2;

  fgets(s, SIZE, stdin);
  scanf(" %c", &c1);
  scanf(" %c", &c2);

  s[strcspn(s, "\n")] = '\0';

  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] == c1) {
      s[i] = c2;
      break;
    }
  }

  printf("%s", s);

  return 0;
}