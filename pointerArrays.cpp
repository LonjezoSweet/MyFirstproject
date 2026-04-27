#include<iostream>
using namespace std;
int main(){
    int numbersarray[5];
    int* pPointer = nullptr;
    pPointer = numbersarray;
    *pPointer = 10;
    *pPointer = 20;
    pPointer = &numbersarray[2];
    *pPointer = 30;
    pPointer = numbersarray + 3;
    *pPointer = 40;
    pPointer = numbersarray;
    *(pPointer+4) = 50;
    for(int n = 0; n<5;n++){
        cout<<numbersarray[n]<<endl;
    }
    return 0;
}