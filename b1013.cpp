#include<iostream>
using namespace std;
bool isPrime(int n){
	if(n<=0||n==1) return false;
	if(n==2) return true;
	for(int i = 2;i*i<=n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int m,n,count = 0,cnt = 0;
	cin>>m>>n;
	for(int i = 1;i<10001;i++){
		if(isPrime(i)){
			count++;
			if(count>=m&&count<=n){
				cnt++;
				if(cnt%10==1)
					cout<<i;
				else
					cout<<" "<<i;
				if(cnt%10==0)
					cout<<endl;
			}
		}
		if(count>n) break;
	}
	return 0;
}


