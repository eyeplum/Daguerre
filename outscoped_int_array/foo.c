#include <stdio.h>

int * foo(int i) {
  int a[] = {i};
  return a;
}

int main() {
  int * foo_arr = foo(1);
  foo(10);

  printf("foo_arr[0] = %d\n", foo_arr[0]); // => foo_arr[0] = 10

  return 0;
}

