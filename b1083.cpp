#include <iostream>
#include<vector>
#include<cmath>
using namespace std;
int a[10000]={0};
int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 1;i<=n;i++){
		cin>>v[i];
		a[abs(v[i]-i)]++;
	}
	for(int i = 10000;i>=0;i--){
		if(a[i]>1) cout<<i<<" "<<a[i]<<endl;
	}
	return 0;
}

