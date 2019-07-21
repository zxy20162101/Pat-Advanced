#include<iostream>
#include<string>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    string out = to_string(c);
    int cnt=0;
    if(out[0]!='-'){
        cnt++;
    }
    else   cout<<'-';
    for(int i=1;i<out.length();i++){
        if(cnt%3==0 && i!=out.length()-1 && i!=1)cout<<',';
        cout<<out[i];
        cnt++;
    }
}
