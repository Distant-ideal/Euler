/*************************************************************************
	> File Name: euler_10.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时55分38秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 2000000

int prime[MAX_N + 5] = {0};

int main() {
    for(int i = 2; i <= MAX_N; i++) {
        if(!prime[i]) {
            prime[++prime[0]] = i;
        }
        for(int j = 1; j <= prime[0] && prime[j] *i <= MAX_N; j++) {
            prime[i * prime[j]] = 1;
            if(i % prime[j] == 0) break;
        }
    }
    long long int sum = 0;
    for(int i = 1; i <= MAX_N; i++) {
        sum += prime[i];
    }
    printf("%lld\n", sum);
    return 0;
}
