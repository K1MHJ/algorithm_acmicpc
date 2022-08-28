#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long A,B,C,D;
    cin >> A >> B >> C;
    if(C <= B){
        D = -1;
    }else{
        long long e = A % (C-B);
        D = (long long)ceil((double)A/(double)(C-B)); 
        if(e == 0){
            D++;
        }
    }
    
    cout << D << endl;
    return 0;
}
