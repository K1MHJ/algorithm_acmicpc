#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;
int main()
{
    int group_num;
    int N;
    char txt[101];
    int length;
    bool preHit[0x80];
    bool check;
    char preChar;
    
    cin >> N;
    group_num = 0;
    for(int i=0;i<N;i++){
       for(int i=0;i<0x80;i++){
           preHit[i]=false;
       }
       cin >> txt;
       length = strlen(txt);
       check = false;
       preChar = 0x00;
        for(int j=0;j<length;j++){
            if(preChar == 0x00){
                
            }else{
                if(preChar == txt[j]){
                    continue;
                }
                if(preHit[(int)txt[j]] == true){
                    check=true;
                    break;
                }
            }
            
            preHit[(int)txt[j]] = true;
            preChar = txt[j];
        }
        if(check == false){
            group_num++;
        }
    }
    cout << group_num << endl;
    return 0;
}
