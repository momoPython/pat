#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	getchar();
	int flagshu,flagmu,flag;
	for(int i = 0;i<n;i++){
		getline(cin,s);
		flagshu=0,flagmu=0,flag =0;
		if(s.length()<6){
			cout<<"Your password is tai duan le."<<endl;
		}else{
			for(int j = 0;j<s.length();j++){
				if(!(isalpha(s[j]) || isdigit(s[j]) || s[j]=='.')){
					flag=1;
				}
				if(isdigit(s[j])){
					flagshu = 1;
				} 
				if(isalpha(s[j])){
					flagmu = 1;
				} 
			}
			if(flag==1){
				cout<<"Your password is tai luan le."<<endl;
			}else{
				if(flagshu==1&&flagmu==1){
					cout<<"Your password is wan mei."<<endl;
				}
				if(flagshu==1&&flagmu==0){
					cout<<"Your password needs zi mu."<<endl;
				}
				if(flagshu==0&&flagmu==1){
					cout<<"Your password needs shu zi."<<endl;
				}
			}
		}	
	}
	return 0;
}

