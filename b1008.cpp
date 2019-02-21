#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	//这里出现了问题,就是m和n的大小问题,有可能n是比m小; 
	m=m%n; 
	reverse(begin(v),begin(v)+n);
	reverse(begin(v),begin(v)+m);
	reverse(begin(v)+m,begin(v)+n);

	for(int i = 0;i<n-1;i++){//最后一个位置不带空格的打印方法 
		cout<<v[i]<<" ";
	}
	cout<<v[n-1];
	return 0;
}
