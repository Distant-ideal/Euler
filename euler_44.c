/*************************************************************************
	> File Name: euler_44.cpp
	> Author: 
	> Mail: 
	> Created Time: 2018年08月01日 星期三 11时57分33秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>

int64_t find1(int64_t n) { 
    return n * (3 * n - 1) / 2;
}

int64_t find2(int64_t x) {
        int64_t head = 1, tail = 500000000, mid;
    while (head <= tail) {
                mid = (head + tail) >> 1;
                if (find1(mid) == x) return 1;
                if (find1(mid) > x) tail = mid - 1;
                else head = mid + 1;
            
    }
        return 0; 

}

int main() {
    int64_t i = 1, j = 1, ans = INT64_MAX;
    while (find1(j + 1) - find1(j) < ans) {
        j++;
        i = j - 1;
        do {
            if (find2(find1(i) + find1(j))) {
                if (find2(find1(j) - find1(i))) {
                    if (find1(j) - find1(i) < ans) {
                    ans = find1(j) - find1(i);               
                    }                
                }       
            }
            i--;
        } while (i >= 1 && find1(j) - find1(i) < ans);    
    }
    printf("%" PRId64 "\n", ans);
    return 0;
}
