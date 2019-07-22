#include<iostream>
#include<string>
using namespace std;
//没啥要注意的，一遍AC
int main(){
    int n;
    cin>>n;
    int unlock[n];
    int lock[n];
    string id[n];
    string in;
    string out;
    int first_unlock = 1e9+7;
    int flag1,flag2;
    int last_lock= -1;
    for(int i=0;i<n;i++){
        cin>>id[i];
        cin>>in;
        cin>>out;
        unlock[i]=stoi(in.substr(0,2))*3600+stoi(in.substr(3,2))*60+stoi(in.substr(6,2));
        lock[i]=stoi(out.substr(0,2))*3600+stoi(out.substr(3,2))*60+stoi(out.substr(6,2));
        if(first_unlock>unlock[i]){
            first_unlock = unlock[i];
            flag1 =i;
        }
        if(last_lock<lock[i]){
            last_lock =lock[i];
            flag2 =i;
        }
    }
    cout<<id[flag1]<<' '<<id[flag2]<<endl;
}
