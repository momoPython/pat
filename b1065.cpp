#include <bits/stdc++.h>
using namespace std;
int a[100000];
int main() {
	int n,c,d;
	cin>>n;
	for(int i = 0;i<100000;i++){
		a[i]=-3;
	}
	for(int i = 0;i<n;i++){
		cin>>c>>d;
		a[c] = d;
		a[d] = c;
	}
	int m,temp;
	cin>>m;
	for(int i =0;i<m;i++){
		cin>>temp;
		if(a[temp]!=-3){
			if(a[a[temp]]==-1){
				a[a[temp]] = -2;
				a[temp] = -2;
			}else{
				a[temp] = -1;
			}
		}else{
			a[temp] = -1;
		}
		
	}
	vector<int> v;
	int cnt=0;
	for(int i = 0;i<100000;i++){
		if(a[i]==-1){
			v.push_back(i);
			cnt++;
		}
	}
	cout<<cnt<<endl;
	int flag=0;
	for(int i = 0;i<v.size();i++){
		if(flag!=0) cout<<" ";
		printf("%05d",v[i]);
		flag = 1;	
	}
	return 0;
}
