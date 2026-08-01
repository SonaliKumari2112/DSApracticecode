#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string word, ss;
  getline(cin,ss);
    stringstream s(ss);
    while(s>>word){
        reverse(word.begin(),word.end());
        cout<<word<<" ";
    }
    return 0;
}