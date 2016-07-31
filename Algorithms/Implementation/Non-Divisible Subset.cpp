#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, temp;
    
    cin >> n >> k;
    vector<int> v(k);
    
    for(int i=0; i < n; ++i){
        cin >> temp;
        ++v[(temp%k)];
    }
    
    int count =0;
    for(int i=1; i <= k/2; ++i){
        count += std::max(v[i], v[k-i]);
    }
    
    if(k%2 == 0) count -= (max(v[k/2]-1,0));
    if(v[0]) ++count;
    cout << count << endl;
    return 0;
}
