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
	//�˴��漰��int����ת��Ϊstring����
	//��򵥵ķ���Ӧ�þ���ʹ�� to_string���������. 
 	//������һ��������滥�������� 
 	//����int ת string ʹ��to_string()������.
	//����stringתint ʹ��stoi()����
	//ֵ��һ�����,����������C++11��׼��
	string ss = to_string(sum);
	for(int i = 0;i<ss.length();i++){
			cout<<str[ss[i]-'0'];
			if(i!=ss.length()-1)
				cout<<" ";
	}
	return 0;
}
