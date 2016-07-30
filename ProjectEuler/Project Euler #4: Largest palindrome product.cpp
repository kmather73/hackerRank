#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrone(int n){
    int num=0;
    
    for(int i =0; i < 3; ++i){
        num *= 10;
        num += n%10;
        n /= 10;
    }
    
    return n == num;
}

int findLargePalindrome(int n) {
    int max = 1;
    for(int i=999; i>= 100; --i) {
        for(int j = min(999, n/i); j >= 100; --j){
            if(i*j < n && isPalindrone(i*j))
                max = std::max(max, i*j);
        }
    }
    return max;
}

int main() {
    int T, n;
    cin >> T;
    
    for(int i=0; i < T; ++i){
        cin >> n;
        cout << findLargePalindrome(n) << endl;
    }
    return 0;
}
