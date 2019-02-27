#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
int a[100] = {0};
int main() {
	int n,sum,cnt=0;
	cin>>n;
	vector<int> v;
	string s;
	for(int i = 0;i<n;i++){
		cin>>s;
		sum = 0;
		for(int j= 0;j<s.length();j++){
			sum+=s[j]-'0';
		}
		a[sum] = 1;
	}
	for(int i = 0;i<100;i++){
		if(a[i]==1){
			cnt++;
			v.push_back(i);
		} 
	}
	cout<<cnt<<endl;
	for(int i = 0;i<v.size();i++){
		if(i!=0) cout<<" ";
		cout<<v[i];
	}
	return 0;
}
