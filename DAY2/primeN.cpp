#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<n;i++){
        int num=i;
        bool isprime=true;
        for(int j=2;j<=num/2;j++){
            if(num%j==0){
                isprime=false;
                break;
            }
        }
        if(isprime){
            cout<<num<<"  ";
        }
    }
    return 0;
}