#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int T,a,b;
    cin >> T;
    for(int i = 0;i<T;i++){
        cin >> a >> b;
        printf("%d\n",a+b);
    }
    return 0;
}
