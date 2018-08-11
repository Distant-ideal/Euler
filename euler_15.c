/*************************************************************************
	> File Name: euler_15.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 11时44分01秒
 ************************************************************************/

#include<stdio.h>

int main() {
        long long int  sum = 1, ans = 1;
    for(int i = 21; i <= 40; i ++) {
                sum *= i;
        while (sum % ans == 0 && ans <= 20) {
                        sum /= ans;
                        ans++;
                    
        }
            
    }
        printf("%lld", sum);
        printf("\n");
        return 0;

}
