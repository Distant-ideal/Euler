/*************************************************************************
	> File Name: euler_38.c
	> Author: 
	> Mail: 
	> Created sme: 2018年08月01日 星期三 18时48分08秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>
#include<string.h>

int num[11];
int find() {
    if(num[0]) return 0;
    for(int i = 1; i <= 9; i++)
        if(num[i] != 1) return 0;
    return 1;
}
int main(){
    for(int i = 9876; i >= 9123; i--) {
        memset(num, 0, sizeof(num));
        int s = i;
        while(s) {
            num[s % 10]++;
            s /= 10;        
        }
        s = i * 2;
        while(s) {
            num[s % 10]++;
            s /= 10;        
        }
        if(find()) {
            printf("%d%d\n", i, i * 2);
            break;        
        }
    }
    return 0;
}
