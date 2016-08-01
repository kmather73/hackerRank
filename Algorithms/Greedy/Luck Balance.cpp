#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N, K;
    cin >> N >> K;
    vector<vector<int>> v(N, vector<int>(2));
    
    for(int i=0; i<N; ++i){
        for(int j=0; j<2; ++j){
            cin >> v[i][j];
        }
    }
    sort(v.begin(), v.end(), [](vector<int> a,vector<int> b){return a[0] > b[0];});
    int luck=0;
    
    for(int i=0; i<v.size(); ++i){
        if(K && v[i][1]){
            --K;
            luck += v[i][0];
        } else if(v[i][1] == 0){
            luck += v[i][0];
        } else {
            luck -=v[i][0];
        }
    }
    
    cout << luck << endl;
    return 0;
}
