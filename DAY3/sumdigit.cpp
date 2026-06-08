#include<iostream>
using namespace std;
int main(){int num;
    cin>>num;
    int sum=0;
    while(num!=0){
        int n=num%10;
        sum=sum+n;
        num=num/10;
    }
    cout<<sum;
    return 0;
}