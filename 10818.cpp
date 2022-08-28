#include <iostream>
#include <algorithm>
using namespace std;

#define _USE_ALGORITHM_

int main()
{
    int* Nu;
    int N;
    int max,min;
    cin >> N;
    Nu = (int*)malloc(sizeof(int) * N);
    for(int i = 0;i<N;i++){
        cin >> Nu[i];
    }
#ifdef _USE_ALGORITHM_
    max = *max_element(Nu, Nu+N);  
    min = *min_element(Nu, Nu+N);  
#else
    max = Nu[0];
    min = Nu[0];
    for(int i = 0;i<N;i++){
        if(max < Nu[i]){
            max = Nu[i];
        }
        if(min > Nu[i]){
            min = Nu[i];
        }
    }
#endif
    free(Nu);
    cout << min << " " << max << endl;
    return 0;
}
