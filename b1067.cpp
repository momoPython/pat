#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n,cnt=0;
	string cs;
	cin>>cs>>n;
	string s="q";
	for(int i = 0;s!="#";i++){
		cin>>s;
//		getline(cin,s);
		if(cs==s){
			cout<<"Welcome in"<<endl;
			break;
		}else{
			cout<<"Wrong password: "<<s<<endl;
			cnt++;
			if(cnt==n){
				cout<<"Account locked"<<endl;
				break;
			}
		}
	}
	return 0;
}
