#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int costToCopy(string &s){
    set<char> used;
    int cost = 0;
    
    for(char c : s){
        cost += 1-used.count(c);
        used.insert(c);
    }
    return cost;
}

int main(){
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string s;
        cin >> s;
        cout << costToCopy(s) << endl; 
    }
    return 0;
}
