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

int getMinHeight(vector<int> totalHeights){
    int minHeight = INT_MAX;
    for(int i =0; i < totalHeights.size(); ++i) {
        minHeight = min(minHeight, totalHeights[i]);
    }
    return minHeight;
}

int main(){
    
    vector<vector<int>> heights(3);
    vector<int> indexs(3,0);
    vector<int> totalHeights(3,0);
    vector<int> sizes(3);
    int temp;
    
    for(int i=0; i < sizes.size(); ++i){
        cin >> sizes[i];
    }
    
    for(int i=0; i < heights.size(); ++i){
        for(int j=0; j<sizes[i]; ++j){
            cin >> temp;
            heights[i].push_back(temp);
            totalHeights[i] += temp;
        }
    }
    
    int minHeight = getMinHeight(totalHeights);
    
    
    while(totalHeights[0] != minHeight || totalHeights[1]!= minHeight || totalHeights[2] != minHeight){
        for(int i=0; i<totalHeights.size(); ++i){
            if(totalHeights[i] > minHeight) {
                totalHeights[i] -= heights[i][indexs[i]++];
            }
        }
        
        minHeight = getMinHeight(totalHeights);
    }
    
    cout << minHeight << endl;
    
    return 0;
}
