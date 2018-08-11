/*************************************************************************
	> File Name: euler_49.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 10时23分46秒
 ************************************************************************/

#include<stdio.h>


int find1(int i, int j, int k) {
    if(k - j == j - i) {
        return 1;
    }
    return 0;
}
int main() {
    int n =0;
    int sum = 0;
    for(int i = 2; i * i < MAX_N; i++) {
        if(prime[i]) {
            continue;                
        }
        for(int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;                        
        }
    }
    prime[1] = 1;
    return 0;
}
