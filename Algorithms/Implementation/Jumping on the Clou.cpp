#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solveClouds(vector<int> dp, vector<int> clouds, int i){
    if(i >= dp.size()) return INT_MAX;
    if(dp[i] != -1) return dp[i];
    
    if(clouds[i]==1){
        dp[i] = INT_MAX;
    } else {
        int oneStep = solveClouds(dp, clouds, i+1);
        int twoStep = solveClouds(dp, clouds, i+2);
    
        dp[i] = 1+min(oneStep, twoStep);
        if(dp[i] < 0) dp[i] = INT_MAX;
    }
    
    return dp[i];
}

int main(){
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    vector<int> dp(n, -1);
    dp[n-1] = 0;
    
    cout << solveClouds(dp, c, 0) << endl;
    return 0;
}
