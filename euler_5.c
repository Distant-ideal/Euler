/*************************************************************************
	> File Name: euler_5.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时33分05秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long int i, sum = 0;
    for(i = 2050; i <= 500000000; i++) {
        for(int j = 1; j <= 20; j++) {
            if(i % j != 0) {
                break;
            }
            if(i % j == 0) {
                if(j == 20) {
                    sum = i;
                    printf("%lld", i);
                    return 0;
                }
            }
        }
    }
}
