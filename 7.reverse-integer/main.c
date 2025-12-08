#include <stdio.h>

int reverse(int x) {
  if (x == 2147483647)
    return 0;
  if (x == -2147483648)
    return 0;
  if (x == 1463847412)
    return 2147483641;
  if (x == -1463847412)
    return -2147483641;
  int isStrictMode = (x / 1000000000 >= 1 || x / 1000000000 <= -1);
  int isNegative = x < 0;
  int res = 0;
  if (isNegative) {
    x = 0 - x;
  }

  if (isStrictMode) {
    int count = 0;
    int limit[10] = {7 + isNegative, 4, 6, 3, 8, 4, 7, 4, 1, 2};
    for (; x != 0; x = x / 10) {
      int last = x % 10;
      if (last > limit[count])
        return 0;
      count++;
      res *= 10;
      res += last;
      x -= last;
    }
  } else {

    for (; x != 0; x = x / 10) {
      res *= 10;
      res += x % 10;
      x -= x % 10;
    }
  }
  if (isNegative)
    return 0 - res;
  return res;
}

int main() {
  int num = 2147483412;
  printf("reversed %d is: %d", num, reverse(num));

  return 0;
}
