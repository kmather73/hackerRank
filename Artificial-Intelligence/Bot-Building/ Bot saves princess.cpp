#include <iostream>
#include <vector>
using namespace std;

void printMove(int a, int b, string move1, string move2){
    int diff = a - b;
    int delta = 1;
    string move = move1;
    
    if(diff > 0){
        delta = -1;
        move = move2;
    }
    
    while(diff){
        diff += delta;
        cout << move << endl;
    }
}

void displayPathtoPrincess(int n, vector <string> grid){
    int m = grid[0].size();
    int xp, yp, xm, ym ;
    
    for(int i = 0; i < n; ++i){
        for(int j =0; j <m; ++j){
            if(grid[i][j] == 'p'){
                xp = i; yp = j;
            } else if(grid[i][j] == 'm'){
                xm = i; ym = j;
            }
        }
    }
    
    printMove(xm, xp, "DOWN", "UP");
    printMove(yp, ym, "LEFT", "RIGHT");   
}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
