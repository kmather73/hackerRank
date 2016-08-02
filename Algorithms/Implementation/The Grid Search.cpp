#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        vector<pair<int,int>> startPoints;
        
        for(int i=0; i+c-1<C; ++i){
            for(int j=0; j+r-1<R; ++j){
                if(G[j][i]==P[0][0] && G[j+r-1][i+c-1]==P[r-1][c-1] && G[j+r-1][i]==P[r-1][0] && G[j][i+c-1]==P[0][c-1] ) {
                    startPoints.push_back(make_pair(j,i));
                }
            }
        }
        
        bool found=false;
        
        for(int k=0; k<startPoints.size() && !found; ++k){
            int y=startPoints[k].first;
            int x=startPoints[k].second;
            
            bool valid=true;
            for(int i=0; i<r && valid;++i){
                for(int j=0; j<c && valid; ++j){
                    valid = G[y+i][x+j]==P[i][j];
                }
            }
            found = valid;
        }
        
        if(found) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
