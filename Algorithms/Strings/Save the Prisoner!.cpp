#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, n, m, S;
    cin >> T;
    
    for(int i=0; i<T; ++i){
        cin >> n >> m >> S;
        cout << (S+m-1-1)%n +1 << endl;
    }
    return 0;
}
