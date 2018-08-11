/*************************************************************************
	> File Name: euler_9.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月11日 星期六 14时25分35秒
 ************************************************************************/

#include<stdio.h>

int main() {
    int a, b, c, m, n;
    for(int i = 1; i < 32; i++) {
        for(int j = i + 1; j <= 32; j++) {
            a = j * j - i * i;
            b = 2 * i * j;
            c = i * i + j * j;
            if(1000 % (a + b + c) == 0) {
                if((a + b +c) == 1000) { 
                printf("%d\n%d\n%d\n", a, b, c);
                int sum = 1;
                sum = a * b * c;
                printf("%d\n", sum);
                }            
            }   
        }
    }
    return 0;
}
