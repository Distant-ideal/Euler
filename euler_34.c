/*************************************************************************
	> File Name: euler_34.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时09分13秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2540160

int find(int x) {
    int s = 0, a = x, b, c = 1;
    while(x) {
        b = x % 10;
        while(b) {
            c *= b;
            b--;
        }
        s += c;
        c = 1;
        x /= 10;
    }
    if(s == a) {
        return 1;
    }
    return 0;
}

int main() {
    int i, ans = 0;
    for(i = 3; i <= 2540160; i++) {
        if(find(i)) {
            ans += i;
            printf("%d\n", i);
        }
    }
    printf("%d\n", ans);
    return 0;
}
