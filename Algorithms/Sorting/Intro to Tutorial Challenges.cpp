#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, k, temp;
    cin >> k >> n;
    for(int i = 0;i < n; ++i){
       cin >> temp;
       if(temp == k)
           cout << i << endl;
    }
    return 0;
}
