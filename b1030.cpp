#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n;
	long long int p;
	cin>>n>>p;
	vector<long long int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	
	int result = 0,temp = 0;
	for(int i = 0;i<n;i++){
		for(int j = i+result;j<n;j++){
			if(v[j]<=v[i]*p){
				temp = j-i+1;
				if(temp>result) result = temp;
			}else{
				break;
			}
		}
	}
	cout<<result;
	return 0;
}
