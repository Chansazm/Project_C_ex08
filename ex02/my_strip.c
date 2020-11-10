#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strip(char *param_1) {

  if (NULL == param_1)
    return;

  int n = 0;
  for (int i = 0; i < strlen(param_1); i++)
    if (param_1[i] != ' ')
      param_1[n++] = param_1[i];

  param_1[n] = '\0';
}
/*
int main() {

  char str[] = "C  H  A NS A";
  printf("Before: %s\n", str);
  my_strip(str);
  printf("After: %s\n", str);

  return 0;
}
*/