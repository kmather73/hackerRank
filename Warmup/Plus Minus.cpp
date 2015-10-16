#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, temp;
    int neg = 0;
    int pos = 0;
    int zeros = 0;
    
    cin >> size;
    for(int i = 0; i < size; ++i){
        cin >> temp;
        if(temp > 0)
            ++pos;
        else if(temp < 0)
            ++neg;
        else
            ++zeros;
    }
    std::cout << std::setprecision(3) << (float)pos / size << endl
                << std::setprecision(3) << (float)neg / size << endl
                   << std::setprecision(3) << (float)zeros / size << endl;
    return 0;
}
