#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    string sub;
    getline(cin,sub);
    string ss=s+s;
    if(ss.find(sub)!=string :: npos){
        cout<<" substring found";
    }
    else{
        cout<<"substring not found";
    }
    return 0;

}