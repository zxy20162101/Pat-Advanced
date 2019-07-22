#include<iostream>
#include<string>
using namespace std;
//10^100不能用整数读入，会爆，直接cin>>string 
int main(){
	string ss;
	cin>>ss;
	int sum=0;
    for(int i=0;i<ss.length();i++){
        sum+=(ss[i]-'0');
    }
    string final_sum = to_string(sum);
    for(int i=0;i<final_sum.length();i++){
    	if(i!=0) cout<<' ';
        if(final_sum[i]=='1') cout<<"one";
        if(final_sum[i]=='2') cout<<"two";
        if(final_sum[i]=='3') cout<<"three";
        if(final_sum[i]=='4') cout<<"four";
        if(final_sum[i]=='5') cout<<"five";
        if(final_sum[i]=='6') cout<<"six";
        if(final_sum[i]=='7') cout<<"seven";
        if(final_sum[i]=='8') cout<<"eight";
        if(final_sum[i]=='9') cout<<"nine";
        if(final_sum[i]=='0') cout<<"zero";
    }

}
