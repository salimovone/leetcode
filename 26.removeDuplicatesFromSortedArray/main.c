#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int last = nums[0];
    nums[0] = last;
    int count = 1;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != last) {
            last = nums[i];
            nums[count] = last;
            count++;
        }
    }
    return count;
}

int main() {
    int nums[] = { 0,0,1,1,1,2,2,3,3,4 };
    int newLength = removeDuplicates(nums, 10);
    printf("New length: %d\n", newLength);
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}