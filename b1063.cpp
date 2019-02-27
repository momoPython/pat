#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;
bool cmp(double a,double b){
	return a>b;
}
int main() {
	int n;
	cin>>n;
	double a,b;
	vector<double> v(n);
	for(int i = 0;i<n;i++){
		cin>>a>>b;
		v[i] = sqrt(a*a+b*b);	
	}
	sort(v.begin(),v.end(),cmp);
	printf("%.2f",v[0]);
	return 0;
}

