#include <iostream>
using namespace std;
int a[10000]={0};
int main() {
	int N,M,temp;
	cin>>N>>M;
	for(int i = 0;i<M;i++){
		cin>>temp;
		a[temp]=1;
	}
	string name;
	int n,t,flag,nameCnt=0,wuCnt=0;
	for(int i = 0;i<N;i++){
		cin>>name>>n;
		flag=0;
		for(int j = 0;j<n;j++){
			cin>>t;
			if(a[t]==1){
				if(flag==0) cout<<name<<":";
				printf(" %04d",t);
				wuCnt++;
				flag=1;
			}
		}
		if(flag==1){
			nameCnt++;
			cout<<endl;
		}
	}
	cout<<nameCnt<<" "<<wuCnt;
	return 0;
}

