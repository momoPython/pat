#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n,sum = 0;
	vector<int> v(n);
	cin>>n;
	for(int i = 0;i<n;i++){
		scanf("%d",&v[i]);
//		cin>>v[i];
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			if(i!=j){
				sum = sum +10*v[i]+v[j];
			}
		}
	}
	cout<<sum;
	return 0;
}

