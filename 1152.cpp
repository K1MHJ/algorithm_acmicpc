#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){
    char str[1000001];
    int length;
    int space_num;
    bool hitToken;
    cin.getline(str, sizeof(str));
    length = strlen(str);
    space_num = 0;
    hitToken = false;
    for(int i=0;i<length;i++){
        if(str[i] != ' '){
            if(hitToken == false){
                space_num++;
            }
            hitToken = true;
        }
        else{
            hitToken = false;
        }
    }
    cout << space_num << endl;
    return 0;
}
