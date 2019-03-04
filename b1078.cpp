#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	char c;
	cin>>c;
	getchar();//获取换行符 
	string s,num;
	getline(cin,s);//获取一行 
	int cnt = 1;
	if(c=='C'){
		int count=0;
		int i=0,j=0;
		while(i<s.length()){
			if(s[i]==s[j]){
				j++;
				count++;
				continue;
			}
			if(s[i]!=s[j]){
				if(j-i!=1)
					cout<<j-i<<s[i];
				else
					cout<<s[i];
				i=j;
			}
		}
	} 
	if(c=='D'){
		for(int i = 0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9'){
				num+=s[i];// 我一直不知道位数多了咋办,原来是这样做的呀 
			}else{
				if(num.length()>0) cnt = stoi(num);
				while(cnt--) cout<<s[i];
				cnt=1;
				num = "";
			}
		} 
	}
	return 0;
}

