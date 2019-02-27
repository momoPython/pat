#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool cmp(int a,int b){
 	return a>b;
 }
int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end(),cmp);
	int cnt = 0;
	for(int i = 0;i<v.size();i++){
		if(v[i]<=cnt+1){
			break;
		}
		cnt++;
	}
	cout<<cnt;
	return 0;
}

