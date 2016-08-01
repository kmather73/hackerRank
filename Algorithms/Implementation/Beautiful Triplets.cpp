#include <cmath>
#include <cstdio>
#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, d, temp, count=0;
    cin >> n >> d;
    set<int> nums;
    
    for(int i=0; i<n; ++i){
        cin >> temp;
        nums.insert(temp);
        
        if(nums.count(temp-d)&& nums.count(temp-2*d)) ++count;
    }
    
    
    cout << count << endl;
    return 0;
}
