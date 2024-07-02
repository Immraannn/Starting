#include<iostream>
using namespace std;
int c =45;
int main(){
    //************built in data types**********
    // int a,b,c;
    // cout<<"Enter the value of a:"<<endl;
    // cin>>a;
    // cout<<"Enter the value of b:"<<endl;
    // cin>>b;
    // c = a+b;
    // cout<<"The sum is  "<<c<<endl;
    // cout <<"the global c is " <<::c<<endl;

        //************float,double,and long double literals **********

    // float d=34.5;
    // long double e=34.3;
    // cout<<"The value of d is"<<d<<endl;
    // cout<<"The value of e is"<<e<<endl;

    //************Reference variables******************
    // float x= 455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //******************TYPECASTING*****************
    int a = 45;
    float b =45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of b is "<<int(b);

    int c =int(b);
    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+ (int)b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;



    
    


}