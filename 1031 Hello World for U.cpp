#include<iostream>
#include<string>
using namespace std;
//细节让人头疼，模拟工作事先一定做好 
int main(){
    string ss;
    cin>>ss;
    int n = ss.length(); //6
    int n1,n2;
    n1=n/3;    //2
    n2=n/3+n%3;   //2   helloo      1       1
    							//如果是6的话只输出两行2+4，如果是7的话则要按照 2+2+3输出三行		
    string bottom = ss.substr(n1,n2);
	if(n1==n2){
		for(int i=0;i<n1;i++){  // 0 1
            cout<<ss[i]; //输出第一列 
            if(i==n1-1)cout<<bottom; //当到达最后一行时，输出n2 
			else for(int k=0;k<n2;k++)cout<<" ";
            cout<<ss[n-1-i];
            cout<<endl;
        }
	}
	else{
		for(int i=0;i<n1;i++){  // 0 1
            cout<<ss[i]; //输出第一列 
            
			for(int k=0;k<n2-2;k++)cout<<" ";
            cout<<ss[n-1-i];
            cout<<endl;
        }
        cout<<bottom; //当到达最后一行时，输出n2 
	}

        	
}
