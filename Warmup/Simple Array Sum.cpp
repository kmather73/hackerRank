#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int sum = 0, temp, length;
    
    cin >> length;
    while(length--){
        cin >> temp;
        sum += temp;
    }
    cout << sum;
    return 0;
}
