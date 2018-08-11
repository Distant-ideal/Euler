/*************************************************************************
	> File Name: euler_12.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月06日 星期一 16时20分35秒
 ************************************************************************/

#include<stdio.h>

int num(int n) {
    return (n + 1) * n / 2;
}

int factor_nums(int n) {
    int cnt = 0;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) cnt += 2;
    }
    return cnt;
}

int main() {
    int n = 1;
    while(factor_nums(num(n)) < 500) ++n;
    printf("%d\n", num(n));
    return 0;
}
