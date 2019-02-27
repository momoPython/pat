#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

struct stu{
	string name;
	int high;
};
bool cmp(struct stu a,struct stu b){
	if(a.high==b.high) return a.name<b.name;
	return a.high>b.high;
}

int main() {
	int n,k,m;
	cin>>n>>k;
	vector<struct stu> s(n);
	for(int i = 0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].high;
	}
	sort(s.begin(),s.end(),cmp);//排序完成,差输出 

	int t = 0,row = k;
	while(row){www
		if(row == k){
//			m = n-n/k*(k-1);
			m = n/k+n%k;
		}else{
			m = n/k;
		}
		vector<string> ans(m);
		ans[m/2] = s[t].name;
		//左边一列
		int j = m/2-1;
		for(int i = t+1;i<t+m;i=i+2)
			ans[j--] = s[i].name;
		//右边一列
		j = m/2+1;
		for(int i = t+2;i<t+m;i=i+2)
			ans[j++] = s[i].name;
		//输出当前排
		cout<<ans[0];
		for(int i = 1;i<m;i++)	cout<<" "<<ans[i];
		cout<<endl;
		t = t+m;
		row--;
	}
	return 0;
}

