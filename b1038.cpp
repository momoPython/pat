#include <iostream>
#include<vector>
using namespace std;
int main() {
	int n,m,temp;
	scanf("%d",&n);
	vector<int> v(101);
	for(int i = 0;i<n;i++){
		scanf("%d",&temp);
		v[temp]++;
	}
	scanf("%d",&m);
	for(int i = 0;i<m;i++){
		scanf("%d",&temp);
		if(i!=0) printf(" ");
		printf("%d",v[temp]);
	}
	return 0;
}

