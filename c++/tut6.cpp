//There are two types of header files:
// 1.System header files:It comes with complier
#include<iostream>
// 2.user defined header files:It is written by the programmer
//#include "this.h" //--> This will produce an error if this.his not present in the current directory
using namespace std;
int main(){
    int a=4, b=5;
    cout<<"Operators in c++:"<<endl;
    cout<<" Following are the types of Operators in c++"<<endl;
    //Arithematic Operarors
    cout<<"the value of a+b is "<<a+b<<endl;
    cout<<"the value of a-b is "<<a-b<<endl;
    cout<<"the value of a*b is "<<a*b<<endl;
    cout<<"the value of a/b is "<<a/b<<endl;
    cout<<"the value of a%b is "<<a%b<<endl;
    cout<<"the value of a++ is "<<a++<<endl;
    cout<<"the value of a-- is "<<a--<<endl;
    cout<<"the value of ++a is "<<++a<<endl;
    cout<<"the value of--a is"<<--a<<endl;

    cout<<endl;
    //Assignment opertators --> used to assign value to variables
    // int a=3, b=9
    // char d='d';
    //comparison operators
    cout<<"Following are the comparison operators in c++"<<endl;
    cout<<"The value of a == b is" <<(a==b)<<endl;
    cout<<"The value of a != b is" <<(a!=b)<<endl;
    cout<<"The value of a >= b is" <<(a>=b)<<endl;
    cout<<"The value of a <= b is" <<(a<=b)<<endl;
    cout<<"The value of a > b is" <<(a>b)<<endl;
    cout<<"The value of a < b is" <<(a<b)<<endl;

    //Logical operators
    cout<<"Following are the logical operators in c++"<<endl;
    cout<<" The value of this logical and operators ((a==b) && (a<b) is:"<< ((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operators ((a==b)|| (a<b)) is : "<<((a==b) ||(a<b))<<endl;
    cout<<"The value of this logical not operators (!(a==b)) is : "<<(!(a==b))<<endl;
    



    return 0;
}