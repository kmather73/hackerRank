#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long int fibSum(long long int N){
    long long int fibN=1, fibNm1=0, sum=0;
    
    while(fibN < N){
        if(fibN%2 == 0) sum += fibN;
        
        long long int temp = fibN;
        fibN += fibNm1;
        fibNm1 = temp;
        
        
    }
    return sum;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int T, n;
    
    cin >> T;
    
    for(long long int i = 0; i < T; ++i) {
        cin >> n;
        cout << fibSum(n) << endl;
    }
    
    
    return 0;
}
