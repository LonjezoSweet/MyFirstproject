#include<iostream>
using namespace std;
int main(){
    int firstvalue;
    int secondvalue;
    int* ppointer = nullptr;
    ppointer = &firstvalue;
    *ppointer = 10;
    ppointer = &secondvalue;
    *ppointer = 20;
    cout<<firstvalue<<endl;
    cout<<secondvalue<<endl;
    return 0;
}