#include<bits/stdc++.h>
using namespace std;

//bool isHuiWen(string s){
//	int len=s.length();
//	if(s.length()==1) return true;
//	for(int i=0;i<len/2;i++){
//		if(s[i]!=s[len-1-i]) return false;
//	}
//	return true;
//}
//int main() {//感觉可能是因为数字太大,要模拟手动加法才行,先留一下 
//	string s;
//	cin>>s;
//	int count=10;
//	while(count>0){
//		if(isHuiWen(s)){
//			cout<<s<<" is a palindromic number.";
//			break;
//		}else{
//			string s1= s;
//			reverse(s.begin(),s.end());
//			long long int sum = stoll(s1)+stoll(s);
//			printf("%lld + %lld = %lld\n",stoll(s1),stoll(s),sum);
//			s = to_string(sum);
//			count--;
//		}
//	}
//	if(count==0) printf("Not found in 10 iterations.");
//	return 0;
//}

//字符串逆置 
string rev(string s){
	reverse(s.begin(),s.end());
	return s;
}

string add(string s1,string s2){
	string s = s1;
	int carry = 0;
	for(int i = s1.size()-1;i>=0;i--){
		s[i] = (s1[i]-'0'+s2[i]-'0'+carry)%10+'0';
		carry = (s1[i]-'0'+s2[i]-'0'+carry)/10;
	}
	if(carry>0) s = "1"+s;
	return s;
}
int main(){
	string s,sum;
	int n = 10;
	cin>>s;
	if(s==rev(s)){
		cout<<s<<" is a palindromic number.\n";
		return 0;
	}
	while(n--){
		sum = add(s,rev(s));
		cout<<s<<" + "<<rev(s)<<" = "<<sum<<endl;
		if(sum==rev(sum)){
			cout<<sum<<" is a palindromic number.\n";
			return 0;
		}
		s = sum;
	}
	cout << "Not found in 10 iterations.\n";
 	return 0;
}



