#include<iostream>
#include<vector>
using namespace std;
int main(){
//A1 = 能被5整除的数字中所有偶数的和；
//A2 = 将被5除后余1的数字按给出顺序进?交错求和，即计算n1-n2+n3-n4…；
//A3 = 被5除后余2的数字的个数；
//A4 = 被5除后余3的数字的平均数，精确到数点后1位；
//A5 = 被5除后余4的数字中最大数字
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

