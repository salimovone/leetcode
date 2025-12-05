#include <stdio.h>

int reverse(int x){
    int isStrictMode = (x/1000000000>=1||x/1000000000<=-1);
    int isNegative = x<0;
    int res = 0;
    if (isNegative){
        x = 0 - x;
    }
    for (; x !=0; x = x/10){
        res *=10;
        res += x%10;
        x-=x%10;
    }
    if (isNegative) return 0 - res;
    return (int)res;
}

int main () {
    int num = 121311311;
    printf("reversed %d is: %d", num, reverse(num));

    return 0;
}