#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n,d;
	double e = 0.0;
	cin>>n>>e>>d;
	int x = 0,y = 0;
	int k,count;
	for(int i = 0;i<n;i++){
		cin>>k;
		count = 0;
		double temp;
		for(int j = 0;j<k;j++){
			cin>>temp;
			if(temp<e) count++;
		}
		if(count*2>k&&k>d) y++;
		if(count*2>k&&k<=d) x++;
	}
//	cout<<x*100/n;
	printf("%.1f%% %.1f%%",(double)x*100/n,(double)y*100/n);
	return 0;
}

