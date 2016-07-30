#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> primes;
long long int primeFactor(long long int n){
    long long int i = 0;
    long long int largest = 2;
    while(n%2 == 0) n /= 2;
    
    for(long long int i=3; i*i <= n; i += 2) {
        while(n%i == 0){
            largest = i;
            n = n/i;
        }
    }
    if (n > largest) largest = n;
    
    return largest;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T, n;
    cin >> T;
    
    for(int i=0; i < T; ++i){
        cin >> n;
        cout << primeFactor(n) << endl;
    }
    return 0;
}
