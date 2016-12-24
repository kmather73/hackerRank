#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        cin >> s;
        
        int i=1;
        while(i<s.size()){
            while(i<s.size() && s[i-1] == s[i++]){
                ++count;
            }
        }
        cout << count << endl;
    }
    return 0;
}
