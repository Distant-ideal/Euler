/*************************************************************************
	> File Name: euler_46.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 15时28分43秒
 ************************************************************************/

#include<stdio.h>

#define MAX  1000000
int num[MAX + 1] = {1,1},prime[MAX + 1], ans;

int main(){
    for (int i = 2; i <= MAX; i++){
        if (num[i] == 0)  prime[++ans] = i;
        for (int j = 1; j <= ans && i * prime[j] <= MAX; j++){
            num[i * prime[j]] = 1;           
        }    
    }
    for (int i = 35;;i += 2){
        if (num[i] == 0)  continue;
        int sum = 0;
        for (int j = 1; 2 * j * j <= i; j++){
            if (num[i - j * j * 2] == 0){
                sum = 1;
                break;               
            }
        }
        if (!sum){
            printf("%d\n", i);
            return 0;           
        }       
    }
}
