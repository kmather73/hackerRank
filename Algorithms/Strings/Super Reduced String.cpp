#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string reduceString(string s){
    string s2 = "";
    
    for(int i=0; i<s.size(); ++i){
        if(s2.size() > 0 && s2.back() == s[i]){
            s2.pop_back();
        } else {
            s2 += s[i];
        }
    }
    
    if(s2 == "") s2 = "Empty String";
    return s2;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    cin >> s;
    cout << reduceString(s) << endl;
    return 0;
}
