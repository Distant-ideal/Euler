/*************************************************************************
	> File Name: euler_19.c
	> Author: 
	> Mail: 
	> Created Time: 2018年08月05日 星期日 11时44分22秒
 ************************************************************************/

#include<stdio.h>

int days[13] ={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int leap_year(int y) {
    return (y % 4 == 0&& y % 100) || (y % 400 == 0);
}

int get_next_data(int y, int m, int d) {
    d += 1;
    if(d > days[m] + (m == 2&& leap_year(y))) {
        d = 1;
    }
    return d;
}

int main() {
    int ans = 0, y = 1900, m = 1, d = 1, w= 1;
    do {
        d = get_next_data(y, m, d);
        m += (d == 1);
        y += (m == 13 && (m = 1));
    }
}
