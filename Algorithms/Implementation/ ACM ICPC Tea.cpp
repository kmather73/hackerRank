#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    int m;
    cin >> n >> m;
    vector<string> topic(n);
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> topic[topic_i];
    }
    
    int maxKnow=0;
    int count=0;
    for(int i=0; i<n; ++i){
        for(int j=i+1; j<n; ++j){
            int know=0;
            for(int k=0; k<m;++k){
                know += (topic[i][k]=='1' || topic[j][k]=='1');
            }
            
            if(know > maxKnow){
                maxKnow = know;
                count=1;
            } else if(know == maxKnow){
                ++count;
            }
        }
    }
    cout << maxKnow << endl << count << endl;
    return 0;
}
