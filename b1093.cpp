#include<bits/stdc++.h>

using namespace std;

int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	map<char,int> mp;
	for(int i = 0;i<s1.length();i++){
		mp[s1[i]]++;
		if(mp[s1[i]]==1) cout<<s1[i];
	}
	for(int i= 0;i<s2.length();i++){
		mp[s2[i]]++;
		if(mp[s2[i]]==1) cout<<s2[i];
	}
	
	return 0;
}
