#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	int c = m*n;
	string s = to_string(c);
	reverse(s.begin(),s.end());
	cout<<stoi(s);
	return 0;
}

