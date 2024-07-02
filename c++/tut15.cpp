#include<iostream>
using namespace std;
// FUNCTION PROTOTYPE
//TYPE FUNCTION-NAME (ARGUMENTS)
int sum(int a,int b);
void g();
//int sum(int a,b);   NOT ACCEPTALE
//int sum(int,int);     ACEEPTABLE
int main(){
    
int num1,num2;
cout<<"enter first number"<<endl;
cin>>num1;
cout<<"enter second number"<<endl;
cin>>num2;
//num1 and num 2 are actual parameters
cout<<"The sum is"<<sum(num1,num2);
g();
return 0;
}
   int sum(int a,int b){
    //formal parameters a and b will be talking value from actual parameters num1 and num2
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nhello good morning";
}