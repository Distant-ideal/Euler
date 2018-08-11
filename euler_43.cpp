/*************************************************************************
	> File Name: euler_43.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 11时39分19秒
 ************************************************************************/

#include<iostream>
#include<algorithm>

using namespace std;

int num[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int a[7] = {2, 3, 5, 7, 11, 13, 17};

long long int find(int *num) {
    int h = 0;
    long long int s = 0, ans = 0;
    for(int i = 0; i < 10; i++) {
        if(num[0] == 0) return 0;
        s = s * 10 + num[i];
        ans = ans * 10 + num[i];
        if(i >= 3) {
            ans = ans - num[i - 3] * 1000;
            if(ans % a[h] != 0) {
                return 0;
            }
            h++;
        }
    }
    return s;
}

int main() {
    long long int sum = 0;
    do {
        sum += find(num);
    }while(next_permutation(num, num + 10));
    cout << sum << endl;
    return 0;
}
