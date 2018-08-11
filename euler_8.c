/*************************************************************************
	> File Name: euler_8.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 14时55分22秒
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main () {
    char a[1020];
    char temp[1000];
    long long int i, j, sum = 0, s = 0, ans = 0, h;
    while(scanf("%s",temp) != EOF) {
        strcat(a, temp);
    }
    for(long long int i = 0; i < 987; i++) {
        s = 1;
        for(long long int j = 0; j < 13; j++) {
            h = a[i + j] - '0';
            s *= h;
            if(a[i + j] == '0') {
                break;
            }
        }
        if(s > ans) {
            ans = s;
            printf("%lld\n", s);
        }
    }
    printf("%lld\n", ans);
    return 0;
} 
