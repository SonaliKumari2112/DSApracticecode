#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string d;
    getline(cin,s);
    getline(cin,d);
    int freq[256] ={0};
    bool isana=false;
    int m=s.size();
    int n= d.size();
    if(m==n){
    for(int i=0;i<s.size();i++){
        freq[s[i]]++;
        freq[d[i]]--;
    }
}else{
        cout<<"not anagram";
        return 0;
    }
    for(int i=0;i<s.size();i++){
        if(freq[i]==0){
            isana=true;
        }
    }
    if(isana){
        cout<<"anagram";

    }else{
        cout<<"not anagram";
    }
    return 0;
}