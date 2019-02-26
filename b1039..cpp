#include <iostream>
#include<string>
using namespace std;

int book[256];
int main() {
	string a,b;
	cin>>a>>b;
	for(int i = 0;i<a.length();i++){
		book[a[i]]++;
	}
	int result = 0;
	for(int i = 0;i<b.length();i++){
		if(book[b[i]]>0)
			book[b[i]]--;
		else
			result++;
	}
	if(result!=0){
		cout<<"No"<<" "<<result;
	}else{
		cout<<"Yes"<<" "<<a.length()-b.length();
	}
	return 0;
}

