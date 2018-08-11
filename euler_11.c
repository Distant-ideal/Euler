/*************************************************************************
	> File Name: euler_14.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 15时06分40秒
 ************************************************************************/

#include<stdio.h>
#define MAX_N 1000000

int dir[4][2] = {
    1, 1, 1, -1,
    0, 1, 1, 0
};

int main() {
    int n[30][10] = {0};
    for(int i = 5; i < 25; i++) {
        for(int j = 5; j < 25; j++) {
            scanf("%d", n[i] + j);
        }
    }
    int sum = 0;
    for(int x = 5; x < 25; x++) {
        for(int y = 5; y < 25; y++) {
            for(int i = 0; i < 4; i++) {
                int s = 1;
                for(int j = 0; j < 4; j++) {
                    int x1 = x + j * dir[i][0];
                    int y1 = y + j * dir[i][1];
                    s *= n[x1][y1];
                }
                if(s > sum) sum = s;
            }
        }
    }
    printf("%d\n", sum);
    return 0;
}
