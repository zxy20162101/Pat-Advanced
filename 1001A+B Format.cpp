#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c=a+b;
    string out = to_string(c);
    for(int i=0;i<out.length();i++){
        cout<<out[i];
        if(out[i]=='-')continue;
        if((i+1)%3==out.length()%3 && i!=out.length()-1 ){
			cout<<',';
		} 
    }
}

//4,555,555
//咱也不知道这个规律是怎么看出来的，好笨
//注意是从右往左 
