#include<iostream>
using namespace std;
int main(){
	int a,b,flag = 0;
	while(cin>>a>>b){//在一行中输入的方法,将题目分解的方法 
		if(b!=0){
			if(flag == 1) cout<<" ";
			cout<<a*b<<" "<<b-1;
			flag = 1;
		}
	}
	if(flag == 0) cout<<"0 0";
	return 0;
}


