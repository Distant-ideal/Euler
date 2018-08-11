/*************************************************************************
	> File Name: euler_36.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时24分25秒
 ************************************************************************/

#include<stdio.h>

int find(int x, int i) {
    int a, n = 0, s, b = x;
    while(x) {
        n = n * i + x % i;
        x = x / i;
    }
    if(n == b) {
        return 1;
    }
    return 0;
}

int main() {
    int sum = 0;
    for(int i = 1; i <= 1000000; i++) {
        if(find(i, 2)) {
            if(find(i, 10)) {
                sum += i;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
