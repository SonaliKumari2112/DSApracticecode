#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int o=num;
    int a=0;
    while(num!=0){
        int n=num%10;
        a=a+n*n*n;
        num=num/10;
    }
    if(o==a){
        cout<<"armstrong number";
    }else{
        cout<<"not armstrong number";
    }
    return 0;
}