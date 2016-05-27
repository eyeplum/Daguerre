#include <stdio.h>

static int a = 1;

int natrual_generator()
{
  static int b = 0;
  b += a;
  return b;
}

int main()
{
  printf("%d\n", natrual_generator());
  printf("%d\n", natrual_generator());
  printf("%d\n", natrual_generator());

  return 0;
}

