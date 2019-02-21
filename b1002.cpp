#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	cin>>s;
	string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int sum = 0;
	for(int i = 0;i<s.length();i++){
		sum+=s[i]-'0';
	}
	//此处涉及到int整数转换为string类型
	//最简单的方法应该就是使用 to_string函数来解决. 
 	//简单整理一下这个方面互换的问题 
 	//对于int 转 string 使用to_string()函数了.
	//对于string转int 使用stoi()函数
	//值得一提的是,这两个都是C++11标准的
	string ss = to_string(sum);
	for(int i = 0;i<ss.length();i++){
			cout<<str[ss[i]-'0'];
			if(i!=ss.length()-1)
				cout<<" ";
	}
	return 0;
}
