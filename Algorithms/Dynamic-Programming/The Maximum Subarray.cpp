#include <cmath>
#include <cstdio>
#include <climits>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int maxConSubArr(vector<int> v){
    int max=v[0];
    int trueMax = max;
    for(int i=1; i < v.size(); ++i){
        max = std::max(max+v[i], v[i]);
        trueMax = std::max(trueMax, max);
    }
    return trueMax;
}

int maxSumArr(vector<int> v){
    int maxElement=INT_MIN;
    int sum=0;
    
    for(int i=0; i<v.size(); ++i){
        
        if(v[i]>0) sum += v[i];
        maxElement = std::max(maxElement, v[i]);
    }
    
    if(sum==0) sum = maxElement;
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n;
    cin >> T;
    
    for(int i=0; i<T; ++i){
        cin >> n;        
        vector<int> v(n);        
        for(int j=0; j<n; ++j){
            cin >> v[j];
        }
        cout << maxConSubArr(v) << " " << maxSumArr(v) << endl;
        
    }
    return 0;
}
