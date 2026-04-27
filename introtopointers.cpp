#include<iostream>
using namespace std;
int main(){
    int* LONJE = nullptr;
    int integervar = 5;
    LONJE = &integervar;
    cout<<"integervar:"<<integervar<<endl;
    cout<<"adress of integervar:  "<<&integervar<<endl;
    cout<<"pLONJE:  "<<&LONJE<<endl;
    return 0;
}