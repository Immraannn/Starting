#include<iostream>
using namespace std;
int main(){
    // WHAT IS POINTER ?  -DATA TYPE WHICHHOLDS THE ADRESS OF OTHER DATA TYPES

    int a = 3;
    int *b=&a;
    // &----->(Adress of)operator
    cout<<"The adress of a is "<<&a<<endl;
    cout<<"The adress of a is "<<b<<endl;
    //*------>(value at) Dereference operator
    cout<<"The value at adress b is"<<*b<<endl;
}