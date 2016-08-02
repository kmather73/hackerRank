#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    for(int i=0; i<T; ++i){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int j=0; j<n;++j){
            cin >> v[j];
        }
        
        int count=0;
        for(int j=0; j<n;++j){
            for(int k=j+1; k<n; ++k){
                if(v[j] > v[k]) ++count;
            }
        }
        
        if(count%2==0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
