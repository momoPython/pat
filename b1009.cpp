#include<iostream>
#include<stack> 
using namespace std;

int main(){
	stack<string> v;
	string s;
	while(cin>>s) v.push(s);
	cout<<v.top();
	v.pop();
	while(!v.empty()){
		cout<<" "<<v.top();
		v.pop();
	}
	return 0;
}



//
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int main(){
//	string s;
//	getline(cin, s);
//	vector<string> v(100);
//	int j = 0;
//	for (int i = 0; i < s.size(); i++){
//		if (s[i] !=' '){
//			v[j].push_back(s[i]);
//		}
//		else
//			j++;
//	}
//
//	for (int i = j; i >= 0; i--){
//		if (i != j) cout << " ";
//		cout << v[i];
//	}
//
//	return 0;
//}
