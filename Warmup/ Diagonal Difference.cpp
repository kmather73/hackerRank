#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, temp; 
    int upperDiag = 0;
    int lowerDiag = 0;
    cin >> size;
    
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size; ++j){
            cin >> temp;
            if(j == i)
                upperDiag += temp;
            if(size == i + j + 1)
                lowerDiag += temp;
        }
    }
    cout << std::abs(lowerDiag - upperDiag);
    return 0;
}
