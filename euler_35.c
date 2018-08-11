/*************************************************************************
	> File Name: euler_35.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 13时32分15秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#define MAX_N 1000000

int prime[MAX_N] = {0};

int find(int x) {
    int n = 0, m = x;
    while(m) {
        n++;
        m /= 10;    
    }
    int y = n - 1;
    int s = x;
    while(n) {
        int l = s % 10;
        s = s / 10 + l * pow(10, y);
        n--; 
        if(prime[s]) {
            return 0;        
        }
    }
    return 1;
}
int main() {
    int sum = 0;
    for (int i = 2; i * i <= MAX_N; i++) {
        if (prime[i]) {
            continue;                 
        }
        for (int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;             
        }
    }
    for(int i = 2; i <= MAX_N; i++) {
        if(!prime[i]) {
            if(find(i)) {
                printf("%d\n", i);
                sum++;            
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
