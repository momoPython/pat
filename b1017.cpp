//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(){
//	string s;
//	int m; 
//	cin>>s>>m;
//	int n=0;
//	for(int i = 0;i<s.length();i++){
//		n = s[i]-'0'+n;
//		if(n/m){
//			cout<<n/m;
//			n = (n%m)*10;
//		}else{
//			n=10*n;
//		}
//	}
//	cout<<" "<<n/10;	
//	return 0;
//}



#include <iostream>
using namespace std;
int main(){
	string s;
	int a,t = 0,temp = 0;
	cin>>s>>a;
	int len = s.length();
	t = (s[0]-'0')/a;
	if((t!=0&&len>1)||len==1) cout<<t;
	temp = (s[0]-'0')%a;
	for(int i = 1;i<len;i++){
		t = (temp*10+s[i]-'0')/a;
		cout<<t;
		temp = (temp*10+s[i]-'0')%a;
	}
	cout<<" "<<temp;
	return 0;
}











