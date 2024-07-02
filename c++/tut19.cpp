#include<iostream>
using namespace std;
    int sum(int a,int b){
        cout<<"Using function with 2 areguments"<<endl;
        return  a+b;
    }
    int sum(int a,int b,int c){
    cout<<"Using function with 3 areguments"<<endl;
    return a+b+c;
    }
    //CALCULATE VOLUME OF A CYLINDER
    int volume(int r,int h){
        return 3.14*r*r*h;
    }
    //CALCULATE VOLUME OF A CUBE
     int volume(int a){
        return a*a*a;
     }
         //CALCULATE VOLUME OF A RECTANGULARBOX
         int volume(int l,int b,int h){

         return l*b*h;
         }

int main(){
cout<<"THe sum of 3,7 and 6 is " << sum(3,7,6)<<endl;
cout<<"THe sum of 3 and 6 is " << sum(3,6)<<endl;

cout<<"The volume of cuboid of 3,7 and 6 is "<<volume(3,7,6)<<endl;
cout<<"The volume of cylinder of 3 and height 6 is "<<volume(3,6)<<endl;
cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
return 0;
}