#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool isPrime =true;
    if (n <= 1) {
        cout << "not prime" << endl;
        return 0;
    }
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    if(isPrime){
        cout<<"prime number";
    }else{
        cout<<"not prime";
    }
    return 0;
}