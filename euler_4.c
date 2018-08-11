/*************************************************************************
	> File Name: euler_4.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 13时11分42秒
 ************************************************************************/

#include<stdio.h>

int ans, n;
int find(int x) {
    n = 0;
    int h = x;
    while(x) {
        n = n * 10 + x % 10;
        x = x / 10;
    }
    if(n == h) {
        return 1;
    }
    return 0;
}

int main() {
    int c, d, s = 0;
    for(int i = 100; i < 1000; i++) {
        for(int j = 100; j < 1000; j++) {
            ans = i * j;
            if(find(ans)) {
                if(s < ans) {
                    s = ans;
                }
            }
        }
    }
    printf("%d", s);
    return 0;
}
