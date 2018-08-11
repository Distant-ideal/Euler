/*************************************************************************
	> File Name: euler_14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 16时04分30秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2000000

int num[MAX_N] = {0};

int find(long long int x) {
    if(x == 1) {
        return 1;
    } else if(x <= MAX_N && num [x]) {
        return num[x];
    }
    long long int ans;
    if(x & 1) {
        ans = find(x * 3 + 1) + 1;
    } else {
        ans = find(x / 2) + 1;
    }
    if(x <= MAX_N) {
        num[x] = ans;
    }
    return ans;
}

int main() {
    long long int ans = 0, sum = 0;
    for(int i = 1; i < 1000000; i++) {
        int s = find(i);
        if(s > sum) {
            ans = i;
            sum = s;
        }
    }
    printf("%lld\n", ans);
    return 0;
}
