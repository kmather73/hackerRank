#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
#include <set>

using namespace std;

int sumOfMultiples(int N) {
    int sum = 0;
    std::set<int> myset;
    
    for(int i = 3; i < N; i += 3) myset.insert(i);
    for(int i = 5; i < N; i += 5) myset.insert(i);
    
    for(int num : myset) sum += num;
    
    return sum;
}

long long int sumOfMultiples2(int N) {
    long long int sum1=0, sum2=0, sum3=0;
    long long int m = (N-1LL)/5LL;
    long long int k = (N-1LL)/3LL;
    long long int t = (N-1LL)/15LL;
    
    sum1 = 5LL * ( m*(m+1)/2LL- t*(t+1)/2LL);
    sum2 = 3LL*(k*(k+1)/2LL-t*(t+1)/2LL);
    sum3 = -7LL *t*(t+1)/2LL;
    return sum1+sum2+sum3;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    cin >> T;
    for(int i = 0; i < T; ++i){
        cin >> n;
        cout << sumOfMultiples2(n) << endl;
    }
    return 0;
}
