#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int Ncase;
    int Nstudent;
    int*Score;
    int ScoreTotal;
    double ScoreAvr;
    int GoodStudent;
    cin >> Ncase;
    for(int i=0;i<Ncase;i++){
        cin >> Nstudent;
        Score = (int*)malloc(sizeof(int)*Nstudent);
        ScoreTotal = 0;
        for(int j=0;j<Nstudent;j++){
            cin >> Score[j];
            ScoreTotal += Score[j];
        }
        ScoreAvr = (double)ScoreTotal / (double)Nstudent;
        GoodStudent = 0;
        for(int j=0;j<Nstudent;j++){
            if(ScoreAvr < (double)Score[j]){
                GoodStudent++;
            }
        }
        cout << fixed;
        cout.precision(3);
        cout << 
            floor(0.5 + 100000.0 * (double)GoodStudent / (double)Nstudent) /1000.0
            << "%" << endl;
        free(Score);
    }
    return 0;
}
