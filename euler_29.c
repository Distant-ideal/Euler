/*************************************************************************
	> File Name: euler_29.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 18时18分18秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

int num[1000000] = {0};
int map[10000];
int main() {
    int n = 1, m = 0;
    for(int i = 2; i < 100; i++) {
        for(int j = 2; j < 100; j++) {
            map[i] = j;
            num[m] = pow(i, map[i]);
            m++;
        }
    }
    for(int i = 2; i < m; i++) {
        for(int j = i + 1; j < m; j++) {
            if(num[i] == num[j]) {
                n++;
                break;
            }
        }
    }
    printf("%d", n);
    return 0;
}

