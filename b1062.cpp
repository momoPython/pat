#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int gcd(int a,int b){//շת����� ���Լ�� 
	return !b?a:gcd(b,a%b);
}
int main() {
	int a,b,c,d,k;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
//	a/d*b  ��С������ :�������Ȼ��������Լ��
	int g = gcd(b,d);
	b/g*d 

	return 0;
}

