#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cassert>
#include <iostream>
using namespace std;
void shiftRight(int s, int e, int* ar){
    int tmp = ar[e];
    while(s < e){
        ar[e] = ar[e-1];
        --e;
    }
    ar[s] = tmp;
}

void insertionSort(int ar_size, int *  ar) {
    for(int i=1; i<ar_size; ++i){
        int id = i;
        
        while(id > 0 && ar[id-1] > ar[i]) --id;
        
        shiftRight(id, i, ar);
        
        for(int j=0; j<ar_size; ++j) cout << ar[j] << " ";
        cout << endl;
    }

}
int main(void) {
   
    int _ar_size;
    cin >> _ar_size;
    //scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        cin >> _ar[_ar_i];
        //scanf("%d", &_ar[_ar_i]); 
    }

   insertionSort(_ar_size, _ar);
   
   return 0;
}
