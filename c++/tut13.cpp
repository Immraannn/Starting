#include<iostream>
using namespace std;
int main(){

 int marks [4] ={23,45,56,89} ;
 int mathsmarks[4]={2278,738,378,578};
 cout<<"These are maths marks"<<endl;
 cout<<mathsmarks[0]<<endl;
 cout<<mathsmarks[1]<<endl;
 cout<<mathsmarks[2]<<endl;
 cout<<mathsmarks[3]<<endl;

 
//  cout<<"These are marks"<<endl;
//  cout<<marks[0]<<endl;
//  cout<<marks[1]<<endl;
//  marks[2]=455;
//  cout<<marks[2]<<endl;
//  cout<<marks[3]<<endl;

// USINF FOR LOOP
/*for(int i =0; i<4;i++){
    cout<<"The value of marks "<< i << "is" << marks [i]<<endl;
}*/

//   *******************POINTERS AND ARRAYS************
int *p=marks;
cout<<*(p++)<<endl;
// cout<<"The value of *p is "<<*p<<endl;
// cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
// cout<<"The value of *(p+2 )is "<<*(p+2)<<endl;
// cout<<"The value of *(p+3 )is "<<*(p+3)<<endl;
}