#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;
        
        int count=0;
        int wapers=0;
        while(n >= c){
            count += n/c;
            wapers += n/c;
            n = (n%c) + (wapers/m)*c;
            wapers = wapers%m;
        }
        cout << count << endl;
    }
    return 0;
}
