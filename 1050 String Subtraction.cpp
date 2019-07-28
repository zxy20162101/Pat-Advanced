#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

//知识点1：输入时空格代表结束，输入带空格的字符串时需要#include<string.h>中的getline()方法
//知识点2：替换掉字符串str中指定的字符用 algorithm中的 str.remove(remove(s1.begin(),s1.end(),'a'),s1.end())
//         如果只是替换字符串下标i到j之间的某个字符，不晓得修改后行不行
string s1,s2;
int main(){
    getline(cin,s1);
    getline(cin,s2);
//	cout<<s1<<endl; 
    for(int i=0;i<s2.length();i++){
        s1.erase(std::remove(s1.begin(),s1.end(),s2[i]),s1.end());
    }
    cout<<s1<<endl;
//    cout<<s2<<endl;
}
