#include <stdio.h>

int maxArea(int* height, int heightSize) {
    int max = 0;
    int left = 0, right = heightSize - 1;
    while (left < right) {
        int area = (right - left) * ((height[right] < height[left]) ? height[right] : height[left]);
        if (max < area) max = area;

        if (height[right] > height[left]) {
            left += 1;
        }
        else {
            right -= 1;
        }
    }
    return max;
}

int main() {
    int arr[9] = { 1, 8, 6, 2, 5, 4, 8, 3, 7 };
    int res = maxArea(arr, 9);

    printf("%d\n", res);

    return 0;
}