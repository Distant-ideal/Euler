/*************************************************************************
	> File Name: euler_26.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 18时43分31秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#define MAX_N 1000

int dnum[MAX_N + 5];

int find(int d) {
    int y = 1, n = 1;
    memset(dnum, 0, sizeof(dnum));
    while(y != 0 && dnum[y] == 0) {
        dnum[y] = n;
        y = y * 10 % d;
        n += 1;        
    }
    return y ? n - dnum[y]: 0;
}

int main() {
    int max = 0, ans = 0;
    for(int d = 2; d < 1000; d++) {
        int sum = find(d);
        if(sum > max) {
            max = sum;
            ans = d;       
        }          
    }
    printf("%d -> %d\n", ans, max);
    return 0;
}


