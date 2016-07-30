#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str; 
    getline(cin,str);
    vector<bool> letters(26, false);
    
    for (auto & c: str){
        c = toupper(c);
        if( c >= 'A' && c <= 'Z') letters[c-'A'] = true;
    }
    bool valid = true;
    for(auto b: letters) valid &= b;
    
    if(!valid) cout << "not ";
        
    cout << "pangram" << endl;
    return 0;
}
