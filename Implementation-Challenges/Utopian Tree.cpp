#include <iostream>
using namespace std;

int height(int n) {
    int myHeight = 1;
    
    for(int i = 0; i < n; ++i){
       if(i&1)
           ++myHeight;
       else
           myHeight = myHeight * 2;
    }
    return myHeight;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
