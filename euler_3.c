/*************************************************************************
	> File Name: euler_3.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 12时54分14秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long int i, sum, a, b, c, s = 600851475143;
    for(i = 1; i * i < 600851475143; i++) {
        if(s  % i == 0) {
            sum  = s;
        }
        while(s % i == 0) {
            s /= i;
            i += 1;
        }
    }
    if(s != 1) {
        sum = s;
    }
    printf("%lld\n", sum);
    return 0;
}
