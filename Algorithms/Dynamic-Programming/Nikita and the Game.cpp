#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int bestScore(vector<int> sum, int start, int end){
    if(end-start < 2) return 0;
    int left = start, right = end;
    
    while(left <= right){
        int mid = (right-left)/2 + left;
        if(sum[mid] - sum[start] == sum[end]- sum[mid]){
            return 1 + std::max( bestScore(sum, start, mid), bestScore(sum, mid, end));
        } else if(sum[mid] - sum[start] > sum[end]- sum[mid]){
            right = mid-1;
        } else {
            left = mid+1;
        }
    }

    return 0;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T, n, temp;
    cin >> T;
    
    for(int i=0; i<T; ++i){
        cin >> n;
        vector<int> sum(n+1);
        
        for(int j=0; j<n; ++j){
            cin >> temp;
            sum[j+1] = sum[j] + temp;
        }
 
        if(sum[n] == 0) {
            cout << (n-1) << endl;
        } else{
            cout << bestScore(sum, 0, n) << endl;
        }
    }
    return 0;
}
