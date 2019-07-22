#include<iostream>
#include<cstring>
using namespace std;

float a[1003];

//有三个坑，一个是 float 数组的大小等于 sizeof(a)/sizeof(a[0]) 并不等于sizeof（a）
//二是 题目要求保留小数点后一位，需要用到c语言的输出格式控制
//三是 printf()中 输出数组元素是 a[i] 不是 &a[i] 
int main(){
    int n;
    int num;
    float k;
    memset(a,0,sizeof(a));
    for(int i=0;i<2;i++){
        cin>>num;
        while(num--){
            cin>>n; 
            cin>>k;
            a[n]+=k;
        }
    }
    int cnt =0;
    int flag[1003];
    memset(flag,0,sizeof(flag));
    for(int i = sizeof(a)/sizeof(a[0]);i>=0;i--){
        if(a[i]!=0){
            cnt++;
            flag[i]=1;
        }
    }
    cout<<cnt;
    for(int i=sizeof(a)/sizeof(a[0]);i>=0;i--){
        if (flag[i])
        {
        	cout<<' '<<i<<' ';
            printf("%.1f",a[i]);
        }
    }
}

