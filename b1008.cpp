#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> v(n);
	for(int i = 0;i<n;i++){
		cin>>v[i];
	}
	//�������������,����m��n�Ĵ�С����,�п���n�Ǳ�mС; 
	m=m%n; 
	reverse(begin(v),begin(v)+n);
	reverse(begin(v),begin(v)+m);
	reverse(begin(v)+m,begin(v)+n);

	for(int i = 0;i<n-1;i++){//���һ��λ�ò����ո�Ĵ�ӡ���� 
		cout<<v[i]<<" ";
	}
	cout<<v[n-1];
	return 0;
}
