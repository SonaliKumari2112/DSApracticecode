#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int o=n;
    int r=0;
    while(n!=0){
        int l=n%10;
         r= (r*10)+l;
        n=n/10;
    }
    if(o==r){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;
}