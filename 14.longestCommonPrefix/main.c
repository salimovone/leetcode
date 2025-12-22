#include <stdio.h>
#include <stdlib.h>


char* longestCommonPrefix(char** strs, int strsSize) {
	if (strsSize == 0) return "";
	if (strsSize == 1) return strs[0];
	char* sub = malloc(1000);
	char current;
	for (int i = 0;; i++) {
		current = strs[0][i];
		if (current == '\0') {
			sub[i] = '\0';
			return sub;
		}
		for (int j = 0; j < strsSize; j++) {
			if (strs[j][i] != current) {
				sub[i] = '\0';
				return sub;
			}
		}
		sub[i] = current;
	}
}

int main() {
	char* strs[] = { "flower", "flower", "flower" };
	char* prefix = longestCommonPrefix(strs, 3);
	printf("Longest Common Prefix: %s\n", prefix);
	free(prefix);
	return 0;
}