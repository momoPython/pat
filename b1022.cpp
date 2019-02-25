#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	long long int a,b,c;
	int d;
	cin>>a>>b>>d;
	c = a+b;
	int v[100];
	int i = 0;
	if(c==0){
		cout<<"0";
		return 0;
	} 
	
	while(c!=0){//有一个测试点通不过,因为少考虑了c = 0的情况 
		v[i] = c%d;
		c = c/d;
		i++;
	}
	for(int j = i-1;j>=0;j--){
		cout<<v[j];
	}
	return 0;
}

