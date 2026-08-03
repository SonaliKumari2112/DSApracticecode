#include<iostream>
using namespace std;
int main(){
   string s;
   cin>>s;
   string sub;
   cin>>sub;
    string ss=s+s;
   if (ss.find(sub) != string ::npos){
    cout<<" substring found  ";
   }else{
    cout<<"substring  not found";
   }
   
    return 0;
}