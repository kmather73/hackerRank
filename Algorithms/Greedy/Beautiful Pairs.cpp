#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, temp;
    cin >> n;
    unordered_map<int, int> counts;
    
    for(int i=0; i<n; ++i){
        cin >> temp;
        ++counts[temp];
    }
    
    int max=0;
    
    for(int i=0; i <n; ++i){
        cin >> temp;
        if(counts[temp]>0){
            --counts[temp];
            ++max;
        }
    }
    
    cout << (max+1>n? n-1: max+1)<< endl; 
    return 0;
}
