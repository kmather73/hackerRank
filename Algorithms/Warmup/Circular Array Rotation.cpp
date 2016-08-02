#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k ,q, temp;
    cin >> n >> k >> q;
    k = k%n;
    vector<int> v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    
    for(int i=0; i<q; ++i){
        cin >> temp;
        cout << v[(n+temp-k)%n] << endl;
    }   
    return 0;
}
