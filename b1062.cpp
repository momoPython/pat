#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int gcd(int a,int b){//辗转相除法 最大公约数 
	return !b?a:gcd(b,a%b);
}
int main() {
	int a,b,c,d,k;
	scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&k);
//	a/d*b  最小公倍数 :两者相乘然后除以最大公约数
	int g = gcd(b,d);
	b/g*d 

	return 0;
}

