#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> Q1;
    int min1 = INT_MAX, temp;
    for(int i = 0;i< n;++i){
        cin >> temp;
        min1 = std::min(min1, temp);
        Q1.push(temp);
    }
    
    while(Q1.size()){
        int n = Q1.size();
        int min2 = INT_MAX;
        int count = Q1.size();
        queue<int> Q2;
        while(Q1.size()){
            temp = Q1.front(); Q1.pop();
            temp -= min1;
            if(temp > 0){
                Q2.push(temp);
                min2 = std::min(min2, temp);
            }
        }
        cout << count << endl;
        min1 = min2;
        Q1 = Q2;        
    }
    return 0;
}
