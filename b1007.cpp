#include<iostream>
using namespace std;

bool isPrime(int n){
	if(n<=0||n == 2||n==1)//1��������Ҳ���Ǻ���,��Ū����!!! 
		return false;
	for(int i = 2;i*i<=n;i++){//����ĵ��ںű������,������!!!! 
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int n,count = 0;
	cin>>n;
	for(int i = 1;i+2<=n;i++){//�����С�ڵ��ڲ���ֻдС��,�ڶ������Ե㲻�� ,����,Ҫдi+2<=n������i<=n,������ĸ����Ե㲻�� 
		if(isPrime(i)&&isPrime(i+2)) count++;
	}
	cout<<count;
	return 0;
}
