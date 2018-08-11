/*************************************************************************
	> File Name: euler_39.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时17分47秒
 ************************************************************************/


#include <stdio.h>
 
int main() {
    int ans = 0;
    int n;
    for (int i = 12; i <= 1000; i++){
        int max = 0;
        for (int a = 1; a < i; a++){
            for (int b = 1; b < a; b++){
                int c = i - a - b;
                if (c < 0) {
                    break;
                }
                if (a*a + b*b == c*c) {
                    max++;
                }
            }
        }
        if (max > ans) {
            ans = max;
            n = i;        
          } 
    }
    printf("%d %d\n", ans, n);
    return 0;
}
