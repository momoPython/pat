#include<bits/stdc++.h>
using namespace std;

int main(){
//	int a[5] = {1,5,88,6,9};
//	int *b;
//	b = max_element(a,a+5);
//	cout<<*b;

	map<int,int> mp;
	for(int i = 0;i<10;i++){
		mp[i] = i+1;
	}
	for(auto it:mp){
		cout<<it.first<<" "<<it.second<<endl;
	}

}
