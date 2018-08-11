/*************************************************************************
	> File Name: euler_33.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 10时17分39秒
 ************************************************************************/

#include<stdio.h>

int gcd(int a, int b) {
    return a > b ? b : a;
}

int main(){
    int fz = 1,fm = 1;
    for (int i = 1; i <= 9; i++){
        for (int j = i + 1; j <= 9; j++){
            for(int k = i; k <= 9; k++){
                if (j * (i * 10 + k) == i * (j *10 + k)){
                    fz *= i;
                    fm *= j;           
                }
                else if (j * (i * 10 + k) == i * (k * 10 + j)){
                    fz *= i;
                    fm *= j;          
                }
                else if (j * (k * 10 + i) == i * (j * 10 + k)){
                    fz *= i;
                    fm *= j;          
                }
                else if (j * (k * 10 + i) == i * (k * 10 + j)){
                    fz *= i;
                    fm *= j;                   
                }               
            }           
        }        
    }
    int sum = 0;
    sum = fm / gcd(fm, fz);
    printf("%d\n", sum);
    return 0;
}
