/*************************************************************************
	> File Name: euler_31.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时59分53秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 8

int a[MAX_N] = {1, 2, 5, 10, 20, 50, 100, 200};
int dp[300];

int main() {
    dp[0] = 1;
    for(int i = 0; i < 8; i++) {
        for(int j = a[i]; j <= 200; j++) {
            dp[j] += dp[j - a[i]];
        }
    }
    printf("%d\n", dp[200]);
    return 0;
}
