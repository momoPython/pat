#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int sum=v[0];//此处要写v[0],然后循环从1开始. 
	for(int i = 1;i<n;i++){
		sum=(sum+v[i])/2;
	}
	cout<<sum;
	return 0;
}

