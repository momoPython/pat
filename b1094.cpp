#include<iostream>

using namespace std;

bool isPrime(int n){
	if(n==0||n==1) return false;
	if(n==2) return true;
	for(int i = 2;i*i<=n;i++) 
		if(n%i==0) return false;
	return true;
}
int main(){
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	for(int i = 0;i<=n-k;i++){
		string s1=s.substr(i,k);
		if(isPrime(stoi(s1))){
			cout<<s1;//此处还不能打印int 
			return 0;
		}
	}
	cout<<"404"<<endl;
	return 0;
}
