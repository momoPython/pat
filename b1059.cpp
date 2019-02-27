#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

bool isPrime(int n){
	if(n==1) return false;
	if(n==2) return true;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}

int main() {
	int n,m,temp;
	cin>>n;
	int a[10000]={0};
	for(int i=0;i<n;i++){
		cin>>temp;
		a[temp] = i+1;
	}
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>temp;
		if(a[temp]==0){
			printf("%04d: Are you kidding?\n",temp);
			continue;
		}
		if(a[temp] == -1){
			printf("%04d: Checked\n",temp);
			continue;	
		} 
		if(a[temp]==1){
			printf("%04d: Mystery Award\n",temp);
			a[temp]=-1;
			continue;
		}
		if(isPrime(a[temp])){
			printf("%04d: Minion\n",temp);
			a[temp]=-1;
			continue;
		}
		if(a[temp]!=0){
			printf("%04d: Chocolate\n",temp);
			a[temp]=-1;
		}
	}
	return 0;
}

