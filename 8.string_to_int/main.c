#include <stdio.h>
#include <limits.h>

int isNegative = 0;
int isBreak = 0;

void addDigit(int* res, int digit) {
	if (*res > (INT_MAX - digit) / 10) {
		if (isNegative)
		{
			*res = INT_MIN;
			isNegative = 0;
		}
		else
			*res = INT_MAX;
		isBreak = 1;
		return;
	}

	*res = (*res) * 10 + digit;
}

int myAtoi(char* s) {
	int res = 0;
	int isOnlyWhiteSpace = 0;
	int isFirst = 0;
	isNegative = 0;
	isBreak = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		switch (s[i]) {
		case '0':
			addDigit(&res, 0);
			break;
		case '1':
			addDigit(&res, 1);
			break;
		case '2':
			addDigit(&res, 2);
			break;
		case '3':
			addDigit(&res, 3);
			break;
		case '4':
			addDigit(&res, 4);
			break;
		case '5':
			addDigit(&res, 5);
			break;
		case '6':
			addDigit(&res, 6);
			break;
		case '7':
			addDigit(&res, 7);
			break;
		case '8':
			addDigit(&res, 8);
			break;
		case '9':
			addDigit(&res, 9);
			break;
		case '-':
			if ((i == 0 || isOnlyWhiteSpace == i) && !isFirst) {
				isNegative = 1;
				isFirst = 1;
				isOnlyWhiteSpace++;
			}
			else isBreak = 1;
			break;
		case '+':
			if ((i == 0 || isOnlyWhiteSpace == i) && !isFirst) {
				isNegative = 0;
				isFirst = 1;
				isOnlyWhiteSpace++;
			}
			else isBreak = 1;
			break;
		case ' ':
			if (isOnlyWhiteSpace != i || isFirst) isBreak = 1;
			isOnlyWhiteSpace++;
			break;
		default:
			isBreak = 1;
			break;
		}
		if (isBreak) break;
	}
	return isNegative ? -res : res;
}

int main() {
	//printf("-042: %d\n", myAtoi("-042"));
	//printf("   -042: %d\n", myAtoi("   -042"));
	//printf("-04121-2: %d\n", myAtoi("-04121-2"));
	//printf("42: %d\n", myAtoi("42"));
	//printf("1337c0d3: %d\n", myAtoi("1337c0d3"));
	//printf("words and 987: %d\n", myAtoi("words and 987"));
	//printf("0-1: %d\n", myAtoi("0-1"));
	//printf(" - 91283472332: %d\n", myAtoi("-91283472332"));
	//printf("   -+6 123: %d\n", myAtoi("   -+6 123"));
	printf("  +  413: %d\n", myAtoi("  +  413"));

	return 0;
}
