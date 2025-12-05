#include <stdio.h>

int countPartitions(int *nums, int numsSize) {
  int count = 0;
  for (int i = 1; i < numsSize - 1; i++) {
    int part1 = 0;
    int part2 = 0;
    for (int j = 0; j < i; j++) {
      part1 += nums[j];
    }

    for (int k = i; k < numsSize; k++) {
      part2 += nums[k];
    }

    printf("part1: %d; part2: %d;\n", part1, part2);

    if ((part1 - part2) % 2 == 0)
      count++;
  }

  return count;
}

int main() {
  printf("Hello World!\n");
  int arr[5] = {1, 2, 3, 4};
  int count = countPartitions(arr, 5);
  printf("count %d", count);
  return 0;
}
