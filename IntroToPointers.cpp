#include<iostream>
using namespace std;
int main(){
    int* pPointer = nullptr;
    int integervar = 5;
    pPointer = &integervar;
    cout<<"Integervar:"<<endl;
    cout<<"adress of the integervar"<<&integervar<<endl;
    cout<<"pPointer:"<<pPointer<<endl;
    cout<<"adress of pPointer:"<<&pPointer<<endl;
    return 0;

}