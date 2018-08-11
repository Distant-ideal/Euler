/*************************************************************************
	> File Name: euler_40.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 09时42分15秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int main() {
    int a[MAX_N + 10000], b[MAX_N + 10000], m =0, j = 1, x = 1, y = 1, h = 1, k = 1, n = 1;
    for(int i = 1; i <= MAX_N; i++) {
        h = i;
        if(i < 10) {
            a[n] = i;
            n++;
        } else {
            m = 0;
            h = i;
            while(h) {
            	b[m] = h % 10;   
                h /= 10;
                m++;
            }
            m--;
            for(int k = m; k >= 0; k--){
                a[n] = b[k];
                n++;
            }
            if(n >= MAX_N) {
                break;
            }
        }
    }
    for(int i = 0; i <= 2000; i++) {
        printf("%d", a[i]);
    }
    n = 1;
    int x1, y1, z1;
    //int s = a[1] * a[10] * a[100] * a[1000] * a[10000] * a[100000] * a[1000000];
    //scanf("%d %d %d", &x1, &y1, &z1);
    //int s = a[x1] * a[y1] * a[z1];
    //printf(" %d %d %d", a[x1], a[y1], a[z1]);
    //printf("%d\n", s);
    return 0;
}
