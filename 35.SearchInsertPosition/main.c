#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
	int left = 0;
	int right = numsSize;
	while (1) {
		int mid = (left + right) / 2;
		if (nums[mid] < target) {
			if (left == mid) return left + 1;
			left = mid;
		}
		else if (nums[mid] > target) {
			if (right == mid) return right;
			right = mid;
		}
		else {
			return mid;
		}
	}
}


int main() {
	int nums[] = { 1,3,4,6 };
	int target = 5;
	int index = searchInsert(nums, 4, target);
	printf("Index to insert %d: %d\n", target, index);
	return 0;
}