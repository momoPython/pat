#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	char c;
	cin>>c;
	getchar();//��ȡ���з� 
	string s,num;
	getline(cin,s);//��ȡһ�� 
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
				num+=s[i];// ��һֱ��֪��λ������զ��,ԭ������������ѽ 
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

