#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n,m,a,b,t;
	cin>>n>>m>>a>>b>>t;
	if(n==0){
		cout<<"0";
		 return 0;
	}
 	vector<int> v(n*m);
	for(int i = 0;i<m*n;i++){
		cin>>v[i];
		if(v[i]>=a&&v[i]<=b) v[i] = t;
	}
	for(int i = 1;i<=m*n;i++){//�˴����������,��ʱ���� 
		if(i%m!=1) cout<<" ";
		printf("%03d",v[i-1]);
		if(i%m==0) cout<<endl;
	}
	return 0;
}
