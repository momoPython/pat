#include<iostream>
using namespace std;
int main(){
	int da,db,pa=0,pb=0;
	string a,b;
	cin>>a>>da>>b>>db;
	for(int i = 0;i<a.size();i++){
		if(a[i]-'0'==da) pa = pa*10+da;
	}
	for(int i = 0;i<b.size();i++){
		if(b[i]-'0'==db) pb = pb*10+db;
	}
	cout<<pa+pb;
	return 0;
}


