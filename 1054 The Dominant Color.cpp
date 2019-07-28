#include<iostream>
#include<string.h>
#include<map>
using namespace std;

//题目给出的运行内存 64MB，显然 数组index作为分辨率来存出现的次数再比较是吃不下的。
// std::map<int,int > 的上限 178956970，而本题的数据上限2^24 = 16777216.0000000000 竟然map能装的下
map<int ,int >img;
int main(){
    int m,n;
    cin>>m>>n;
    int half =(m*n)/2;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int resolution;
            cin>> resolution;
            //map 默认值是0
            img[resolution]++;
            if(img[resolution]>half){
                cout<<resolution;
                break;
            }
        }
    }
}
