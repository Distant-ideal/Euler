/*************************************************************************
	> File Name: euler_47.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 16时56分49秒
 ************************************************************************/

#include<stdio.h>

#define MAX_N 999999

int prime[MAX_N + 10],num[MAX_N + 10];

int main() {
    int s, sum;
    num[1] = 0;
    for (int i = 2; i <= MAX_N; i++){
        if (num[i] == 0)  prime[++sum] = i;
        for (int j = 1; j <= sum && i * prime[j] <= MAX_N; j++){
            num[i * prime[j]] = 1;
        }
    }
    int x = 0;
    for (int i = 1;i <= MAX_N; i++){
        int ans = i;
        s = 0;
        for (int j = 1; prime[j] * prime[j] <= ans; j++){
            if (ans % prime[j] == 0) s++;
            while(ans % prime[j] == 0) ans /= prime[j];
                    
        }
        if (ans != 1) {
            s++;
        }
        if (s == 4) {
            x++;
        } else {
            x = 0;
        }
        if (x == 4){
            printf("%d\n", i - 3);
            return 0;        
        }   
    }
}
