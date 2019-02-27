#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	int sum = 0,count0=0,count1=0;	
	
	vector<int> v;
	for(int i = 0;i<s.length();i++){
		if(isalpha(s[i])){
			sum+=toupper(s[i])-'A'+1;			
		}
	}
	while(sum!=0){
		v.push_back(sum%2);
		sum=sum/2;
	}
	for(int i = v.size()-1;i>=0;i--){
		if(v[i]==1) count1++;
	}
	count0 = v.size()-count1;
	cout<<count0<<" "<<count1;
	return 0;
}

