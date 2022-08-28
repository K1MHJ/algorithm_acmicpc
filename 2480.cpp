#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))
int main()
{
    int num1, num2, num3;
    int out;
    out = 0;
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 == num2 && num2 == num3){
        out =  10000+num1 * 1000;
    }else if(num1 != num2 && num2 != num3 && num3 != num1){
        out = 100 * MAX(MAX(num1, num2), num3);
    }else{
        int sameNum;
        if(num1 == num2){
            sameNum = num1;
        }else if(num2 == num3){
            sameNum = num2;
        }else{
            sameNum = num3;
        }
        out = 1000 + sameNum * 100;
    }
    printf("%d\n", out); 
}
