#include<iostream>
using namespace std;
int sum(int a,int b){
    int c =a+b;
    return c;
}
//this will not swap a and b
void swap(int  a,int  b){//temp a   b
    int temp=a;        //  4   4   5
    a=b;               //  4   5   5
    b = temp;    }      //  4   5   4
//call by reference using pointer
void swapPointer(int * a,int * b){//temp a   b
    int temp=*a;        //  4   4   5
    *a=*b;               //  4   5   5
    *b = temp;          //  4   5   4
}
//call by reference using c++ reference variables
void swapReferencevar(int  &a,int  &b){//temp a   b
    int temp=a;        //  4   4   5
    a=b;               //  4   5   5
    b = temp;    }      //  4   5   4
int main(){
    int x =4,y=5;
    cout<<"the sum of 4 and 5 is"<<sum(x,y)<<endl;
cout<<"The value of x is"<<x<<"The value of y is"<<y<<endl;
//swap(x,y);THIS WILL NOT SWAP a AND b
swap(x,y);
cout<<"The value of x is"<<x<<"The value of y is"<<y<<endl;

swapPointer(&x,&y);
cout<<"The value of x is"<<x<<"The value of y is"<<y<<endl;
swapReferencevar(x,y);
cout<<"The value of x is"<<x<<"The value of y is"<<y<<endl;

    return 0;
}    