bool isPalindrome(int x) {
    if(x<0) return false;

    int temp = x;
    long res = 0;
    for(; x != 0; x=x/10) {
        res = (res*10) + x%10;
    }
    return temp==res;
}