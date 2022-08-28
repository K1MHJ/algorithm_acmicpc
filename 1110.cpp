#include <iostream>
using namespace std;

int mrg(int n0, int n1){
    return n1 * 10 + n0;
}
void dvd(int src, int* n0, int* n1){
    *n1 = src/10;
    *n0 = src - *n1 * 10;
}
int add(int a, int b){
    return a+b;
}
int get0(int in){
    return in - (in/10)*10;
}
int main(){
    int in,n;
    int a1,a2;
    int loop = 1;
    cin >> in;
    n = in;
    while(true){
        dvd(n, &a1, &a2);
        n = mrg(get0(add(a1,a2)), a1);
        if(in == n ){
            break;
        }
        loop++;
    }
    cout << loop << endl; 
    return 0;
}
