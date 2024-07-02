#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Tell me your age"<<endl;
cin>>age;
//*********SELECTION CONTROL STRUCTURE:IF ELSE IF ELSE LADDER*********
/*if((age<18) && (age>0)){
    cout<<"You can not come to my party"<<endl;
}
else if(age==18){
    cout<<"you are a kid you will get a kid pass for party"<<endl;
}
else if(age<1){
    cout<<"you are not born yet"<<endl;
}
else{
    cout<<"You can come to the party"<<endl;
}*/


//*********SELECTION CONTROL STRUCTURE:SWITCH CASE*********
switch(age)
{
    case 18:
    cout<<"You are 18"<<endl;
    break;
    case 22:
    cout<<"you are 22"<<endl;
    break;
    case 2:
    cout<<"you are 2"<<endl;
    break;
    default:
    cout<<"No special case"<<endl;
    break;
}
cout<<"Done with switch case"<<endl;
}