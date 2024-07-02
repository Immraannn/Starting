#include<iostream>
using namespace std;

//  struct employee{
//     int eID;
//     char favchar;
//     float salary;
// };
// int main(){
//     struct employee harry;
//     harry.eID = 1;
//     harry.favchar = 'c';
//     harry.salary = 1200000;
//     cout<<"The value is "<<harry.eID<<endl;
//     cout<<"The value is "<<harry.favchar<<endl;
//     cout<<"The value is "<<harry.salary<<endl;
// typedef kAa matlab hota hai ki jisko main pehle struct employee bolta tha usko ab ep short mn bol rha hu
typedef struct employee{
    int eID;
    char favchar;
    float salary;
}ep;

union money{
    int rice;
    char car;
    float pounds;
};
int main(){
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
   ep harry;
   union money m1;
   m1.rice = 34;
   cout<<m1.rice<<endl;
    harry.eID = 1;
    harry.favchar = 'c';
    harry.salary = 1200000;
    cout<<"The value is "<<harry.eID<<endl;
    cout<<"The value is "<<harry.favchar<<endl;
    cout<<"The value is "<<harry.salary<<endl;
}