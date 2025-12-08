#include <stdio.h>

int myAtoi(char *s) {
  int res = 0;
  for (char *p = s; *p != '\0'; p++) {
    switch (*p) {
    case '0':
      if (p[0] != '0')
        break;
    case '1':
      break;
    case '2':
      break;
    case '3':
      break;
    case '4':
      break;
    case '5':
      break;
    case '6':
      break;
    case '7':
      break;
    case '8':
      break;
    case '9':
      break;
    case '-':
      break;
    case '+':
      break;
    case ' ':
      break;
    default:
      break;
    }

    return res;
  }
}

int main() {
  printf("-042: %d\n", myAtoi("-042"));
  printf("42: %d\n", myAtoi("42"));
  printf("1337c0d3: %d\n", myAtoi("1337c0d3"));
  printf("0-1: %d\n", myAtoi("0-1"));
  printf("words and 987: %d\n", myAtoi("words and 987"));

  return 0;
}
