#include <iostream>

using namespace std;

int d(int num){
    int t;
    int sum = num;
    t = num;
    while(t>0){
        sum += (t % 10);
        t /= 10;
    }
    return sum;
}
int main()
{
    char rtn[10001];
    int num = 1;
    int k;
    for(int i = 1;i<=10000;i++){
        rtn[i] = 1;
    }
    while(true){
        k = d(num);
        if(num > 10000){
            break;
        }
        if(k < 10001)
            rtn[k] = 0;
        num++;
    }
    for(int i=1;i<=10000;i++){
        if(rtn[i] == 1){
            cout << i << endl;
        }
    }
    return 0;
}
