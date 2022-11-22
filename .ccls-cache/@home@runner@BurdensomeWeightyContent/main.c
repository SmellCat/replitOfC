#include <stdio.h>

void f(char **strArray) {
  for (int i = 0; i < 2; i++) {
    printf("%s\n", strArray[i]);
  }
}

void f1(char ***strArrays) {
  for (int i = 0; i < 2; i++) {
  }
}
int main(void) {
  char *str = "eat";
  printf("%s\n", str);

  char *strArray[2] = {"eat", "ate"};
  f(strArray);

  char *strArray2[1] = {"dddd"};

  char **strArrays[2] = {strArray, strArray2};
  printf("%d\n", sizeof(strArrays) / sizeof(char **));
  f1(strArrays);
  return 0;
}