#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<string> grid(n);
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    
    vector<int> dx({0,0,1,-1});
    vector<int> dy({1,-1,0,0});
    
    for(int i=1; i<n-1; ++i){
        for(int j=1; j<n-1; ++j){
            bool cavity = true;
            for(int k=0; k<dx.size(); ++k){
                cavity &= grid[i][j] > grid[i+dy[k]][j+dx[k]] ;
                
                if(grid[i+dy[k]][j+dx[k]] == 'X') cavity = false;
            }
            if(cavity) grid[i][j] = 'X';
        }
    }
    
    for(int i=0; i<n; ++i){
        cout << grid[i] << endl;
    }
    return 0;
}
