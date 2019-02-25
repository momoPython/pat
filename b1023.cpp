#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	vector<int> a(10);
	for(int i = 0;i<10;i++){
		cin>>a[i];
	}
	int n;
	for(int i = 1;i<10;i++){
		if(a[i]!=0){
			n = i;
			a[i] = a[i] - 1;
			break;	
		}
	}
	cout<<n;
	for(int i = 0;i<10;i++){
		for(int j = 0;j<a[i];j++){
			cout<<i;
		}
	}
	return 0;
}

