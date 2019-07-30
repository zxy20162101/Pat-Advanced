#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string user[n];
    string pwd[n];
    int cnt =0;
    int flag[n];
    memset(flag,0,sizeof(flag));
    for(int i=0;i<n;i++){
        cin>>user[i];
        cin>>pwd[i];
        if(pwd[i].find('l',0) || pwd[i].find('0',0) || pwd[i].find('1',0) || pwd[i].find('O',0)){
            cnt++;
            flag[i]=1;
            pwd[i].replace("1",'@');
            cout<<pwd[i]<<endl;
            pwd[i].replace(pwd[i].begin(),pwd[i].end(),'0','%');
            cout<<pwd[i]<<endl;
            pwd[i].replace(pwd[i].begin(),pwd[i].end(),'l','L');
            cout<<pwd[i]<<endl;
            pwd[i].replace(pwd[i].begin(),pwd[i].end(),'O','o');
            cout<<pwd[i]<<endl;
        }
    }
//    if(cnt){
//        cout<<cnt<<endl;
//        for(int i=0;i<n;i++){
//            if(flag[i])cout<<user[i]<<' '<<pwd[i]<<endl;
//        }
//    }
//    else cout<<"There are "<<n<<" accounts and no account is modified";
}
