#include<iostream>
#include<vector>
using namespace std;
int main(){
//A1 = �ܱ�5����������������ż���ĺͣ�
//A2 = ����5������1�����ְ�����˳���?������ͣ�������n1-n2+n3-n4����
//A3 = ��5������2�����ֵĸ�����
//A4 = ��5������3�����ֵ�ƽ��������ȷ�������1λ��
//A5 = ��5������4���������������
	int n,m;
	cin>>n;
	vector<int> v,v1,v2,v3,v4;
	char a[5] = 'N';
	for(int i = 0;i<n;i++){
		cin>>m;
		if(m%5==0){
			a[0] = '1';
			v.push_back(m);
		} 
		if(m%5==1){
			a[1] = '1';
			v1.push_back(m);
		} 
		if(m%5==2){
			a[2] = '1';
			v2.push_back(m);
		} 
		if(m%5==3){
			a[3] = '1';
			v3.push_back(m);
		} 
		if(m%5==4){
			a[4] = '1';
			v4.push_back(m);
		} 
	}
	
	
	
	
	
	
	return 0;
}

