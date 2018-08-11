/*************************************************************************
	> File Name: euler_37.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 12时59分44秒
 ************************************************************************/

#include<stdio.h>
#include<math.h>

#define MAX_N 1000000
int prime[MAX_N] = {0};

int find(int x) {
    int n = 0,y = x, z = x;
    for(int i = 1; i < 10; i++) {
        n++;
        x /= 10;
        if(x == 0) {
            break;           
        }       
    }
    n = n - 1;
    int m = 10;;
    for(int i = n; i >= 0; i--) {           
        int s = y / 10;
        y /= 10;
        if(prime[s]) return 0;
    }
    for(int i = n; i >= 0; i--) {   
        int s = z % m;
        m *= 10;
        if(prime[s]) return 0;
    }
    return 1;
}
int main() {
    int n =0;
    int sum = 0;
    for(int i = 2; i * i < MAX_N; i++) {
        if(prime[i]) {
            continue;        
        }
        for(int j = i * i; j <= MAX_N; j += i) {
            prime[j] = 1;                
        }
    }
    prime[1] = 1;
    for(int i = 11; i <= MAX_N; i++) {
        if(!prime[i]) {
            if(find(i)) {
                sum += i;
                printf("%d\n", i);               
            }           
        }        
    }
    printf("%d\n", sum);
    return 0;
}
