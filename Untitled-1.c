#include <stdio.h>

int main() {
  int myVar;
  char myChar[10];
  int i;

  printf("Type a number and a character: \n");
  scanf("%d %s", &myVar ,&myChar);
  printf("Your character is:");
  for (i = 0; i < myVar; i++) {
    printf(" %s\n", myChar);
  }
  
  return 0;
}