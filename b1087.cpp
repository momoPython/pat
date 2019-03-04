#include <iostream>
#include<map>
using namespace std;

int main() {
	int n;
	cin>>n;
	map<int,int> mp;
	for(int i = 1;i<=n;i++){
		mp[i/2+i/3+i/5]++;
	}
	cout<<mp.size();
	return 0;
}

