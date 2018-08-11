/*************************************************************************
	> File Name: euler_30.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 13时51分06秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_X 354294

int find(int x) {
    int s = 0, a = x, h;
    while(x) {
        h = x % 10;
        s += pow(h, 5);  
        x /= 10;
    }
    if(s == a) {
        return 1;
    }
    return 0;
}

int main() {
    int ans = 0, sum = 0;
    for(int i = 2; i < MAX_X; i++) {
        if(find(i)) {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}
