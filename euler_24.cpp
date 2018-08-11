/*************************************************************************
	> File Name: euler_24.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 17时58分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string s = "0123456789";
    int  n = 1000000;
    int sum = 1;
    do {
        if(sum == n) {
            cout << s << endl;
            break;        
        }
        sum++;    
    }while(next_permutation(s.begin(), s.end()));
    return 0;
}


