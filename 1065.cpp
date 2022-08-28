#include <iostream>

using namespace std;

int main()
{
    int N, han;
    int a[5];
    int t;
    int k;
    
    cin >> N;
    if(N < 100) han = N;
    else{
        han = 99;
        for(int i = 100;i<=N;i++){
            t = i;
            k = 0;
            do{
                a[0] = t % 10;
                t /= 10;
                if(t <= 0){
                    han++;
                    break;
                }
                a[1] = t % 10;
                a[2] = a[0] - a[1];
                if(k == 0){
                }else{
                    if(a[3] != a[2]){
                        break;
                    }
                }
                a[3] = a[2];
                k++;
            }while(t>0);
        }
    }
    cout << han << endl;
    return 0;
}
