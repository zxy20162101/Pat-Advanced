#include<iostream>
#include<string>
using namespace std;

int main(){
    string ss;
    cin>>ss;
    int n = ss.length(); //6
    int n1,n2;
    n1=n/3;    //2
    n2=n/3+n%3;   //2   helloo
    string bottom = ss.substr(n1,n2);
    int flag;
    if(n1==n2) flag= n2;
	else flag= n2-2; 
    for(int i=0;i<n1;i++){  // 0 1
            cout<<ss[i];
            if(i==n-1)cout<<bottom;
			else for(int k=0;k<flag;k++)cout<<" ";
            cout<<ss[n-1-i];
            cout<<endl;
        }
        	
}
