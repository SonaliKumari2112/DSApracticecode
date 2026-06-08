#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='u'||ch=='o'){
        cout<<ch<<" is vowel";
    }
    else{
        cout<<ch<<" is consonent";
    }
    return 0;
}