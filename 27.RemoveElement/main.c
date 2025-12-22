#include <stdio.h>


int removeElement(int* nums, int numsSize, int val) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            nums[count] = nums[i];
            count++;
        }
    }
    return count;
}


int main() {
    int nums[] = { 3,2,2,3 };
    int val = 3;
    int newLength = removeElement(nums, 4, val);
    printf("New length: %d\n", newLength);
    printf("Array after removing element %d: ", val);
    for (int i = 0; i < newLength; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    return 0;
}