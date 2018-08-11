/*************************************************************************
	> File Name: euler_6.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 13时41分11秒
 ************************************************************************/

#include<stdio.h>

int main() {
    long long int s, a = 0, b = 0, c;
    for(int i = 1; i <= 100; i++) {
        a += i * i;
        b += i;
    }
    c = b * b;
    s = c - a; 
    printf("%lld\n", s);
    return 0;
}
