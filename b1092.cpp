#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	int temp;
	vector<int> v(n),v1(n);
	for(int i = 0;i<m;i++){
		for(int j = 0;j<n;j++){
			cin>>temp;
			v[j]+=temp;
		}
	}
	for(int i = 0;i<n;i++){
		v1[i] = v[i];
	}
	sort(v.begin(),v.end());
	int flag=0;
	cout<<v[n-1]<<endl;
	for(int i = 0;i<n;i++){
		if(v1[i]==v[n-1]){
			if(flag == 1) cout<<" ";
			cout<<i+1;
			flag = 1;
		}
	}
	return 0;
}
