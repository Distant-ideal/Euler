/*************************************************************************
	> File Name: euler_17.c
	> Author: 
	> Mail: 
	> Created Time: 2018年07月31日 星期二 18时25分15秒
 ************************************************************************/

#include <stdio.h>

int num_1[20] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4, 3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
int num_10[10] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};

int find(int i) {
    if(i < 20) {
        return num_1[i];    
    } else if(i < 100) {
        return num_10[i / 10] + num_1[i % 10];       
    } else if(i < 1000) {
        if(i % 100 == 0) {
            return num_1[i / 100] + 7;         
        } else if(i % 100 < 20){
            return num_1[i / 100] + num_1[i % 100] + 7 + 3; 
        } else {
            return num_1[i / 100] + num_10[i / 10 % 10] + num_1[i % 10] + 7 + 3;        
        }
    } else {
        return 11;    
    }
}

int main () {
    int sum = 0;
    for(int i = 1; i <= 1000; i++) {
        sum += find(i);        
    }
    printf("%d\n", sum);
    return 0;
}
