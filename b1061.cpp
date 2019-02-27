#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;


int main() {
	int n,m;
	cin>>n>>m;
	vector<int> st(n);
	vector<int> a(m),b(m);
	for(int i = 0;i<m;i++){
		cin>>a[i];
	}
	for(int i = 0;i<m;i++){
		cin>>b[i];
	}
	int temp;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			cin>>temp;
			if(temp == b[j]){
				st[i] += a[j];
			}
		}
	}
	for(int i = 0;i<n;i++){
		cout<<st[i]<<endl;
	}
	return 0;
}

