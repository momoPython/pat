#include <bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
void print(double x,int m){
	if(x==m) cout<<" "<<"Ping";
	if(x>m) cout<<" "<<"Cong";
	if(x<m) cout<<" "<<"Gai";
}
int main() {
	int m,x,y;
	cin>>m>>x>>y;
	int a,b;
	double c;
	for(a = 99;a>=10;a--){
		b = a%10*10+a/10;
		if(abs(a-b)*y == b*x){
			c = (double)b/y;//是double类型就把double强制类型转换,不可马虎 
			cout<<a;
			print(a,m);
			print(b,m);
			print(c,m);
			return 0;
		}
	}
	cout<<"No Solution";
	return 0;
}

