/*************************************************************************
	> File Name: euler_32.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 14时13分05秒
 ************************************************************************/

#include<stdio.h>

int check(int i,int j) {
    int x[10]={0};
    int k = i / j, sum = 0;
    while(k){
        if (x[k % 10]) return false;
        else x[k % 10] = 1;
        k /= 10;
        sum++;    
    }
    while(j){
        if (x[j % 10]) return false;
        else x[j % 10]=1;
        j /= 10;
        sum++;  
    }
    while(i){
        if (x[i % 10]) return false;
        else x[i % 10]=1;
        i /= 10;
        sum++;
    }
    return sum == 9 && x[0] == 0;
}

int main() {
    int ans = 0;
    for (int i = 1; i <= 9999; i++){
        for (int j = 2; j * j <= i; j++){
            if (i % j == 0 && check(i,j)){
                ans += i;
                break;             
            }
                    
        }
            
    }
    printf("%d", ans);
    return 0;
}
