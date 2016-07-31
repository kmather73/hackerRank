#include <cmath>
#include <set>
#include <unordered_map>
#include <queue>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void BFS(vector<set<int>> G, int S){
    int delta = 6;
    
    vector<int> distance(G.size(), -1);
    unordered_map<int, bool> used;
    
    queue<int> Q({S});
    queue<int> cost({0});
    used[S] = true;
    distance[S] = 0;
    
    while(Q.size()) {
        int u = Q.front(); Q.pop();
        int dist = distance[u];
         
        for(int v: G[u]){
            if(!used[v]){
                used[v] = true;
                distance[v] = dist+delta;
                Q.push(v);
            }
        }
    }
    
    for(int i =1; i < G.size(); ++i){
        if(i != S){
            int x = distance[i];
            cout << x << " ";
        }
    }
    cout << endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T, V, E, S;
    int u, v;
    cin >> T;
    
    for(int i=0; i<T; ++i){
        cin >> V >> E;
        vector<set<int>> G(V+1);
        
        for(int j=0; j<E; ++j){
            cin >> u >> v;
            G[u].insert(v);
            G[v].insert(u);
        }
        cin >> S;
        BFS(G, S);
    }
    return 0;
}
