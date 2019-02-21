#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<=0||n == 2||n==1)//1不是质数也不是合数,别弄错了!!! 
		return false;
	for(int i = 2;i*i<=n;i++){//这儿的等于号必须加上,不能少!!!! 
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n,count = 0;
	cin>>n;
	for(int i = 1;i+2<=n;i++){//这儿的小于等于不能只写小于,第二个测试点不过 ,而且,要写i+2<=n而不是i<=n,否则第四个测试点不过 
		if(isPrime(i)&&isPrime(i+2)) count++;
	}
	cout<<count;
	return 0;
}
