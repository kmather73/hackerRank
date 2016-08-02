#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    
    for(int i=0; i<T; ++i){
        int n, a, b;
        cin >> n >> a >> b;
        set<int> possibleNums; 
        possibleNums.insert(0);
        for(int j=1; j<n; ++j){
            set<int> newNums;
            for(int x: possibleNums){
                newNums.insert(x+a);
                newNums.insert(x+b);
            }
            possibleNums = newNums;
        }
        
        for( int x: possibleNums){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
