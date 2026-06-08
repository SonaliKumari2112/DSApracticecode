#include<iostream>
using namespace std;
int main(){
    int a1,a2,a3;
    cout<<"enter the angle of triangle";
    cin>>a1>>a2>>a3;
    if(a1+a2+a3==180){
        cout<<"valid angle";
    }
    else{
        cout<<"invalid angle";
    }
    int a,b,c;
    cout<<"enter the side of triangle ";

    cin>>a>>b>>c;
    if(a+b>c&&b+c>a&&c+a>b){
        cout<<"valid side";
    }
    else{
        cout<<"invalid";
    }
    return 0;
}