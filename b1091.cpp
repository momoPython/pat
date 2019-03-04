#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,temp,flag,flag1;
	cin>>m;
	string s;
	for(int i = 0;i<m;i++){
		cin>>temp;
		flag1=0;
		for(int n = 1;n<10;n++){
			flag = 0;
			s = to_string(n*temp*temp);
			string ss = to_string(temp);
			reverse(s.begin(),s.end());
			reverse(ss.begin(),ss.end());
			for(int k = 0;k<ss.length();k++){
				if(s[k]!=ss[k]){
					flag = 1;
					break;
				} 
			}
			if(flag==1) continue;
			else{
				printf("%d %d\n",n,n*temp*temp);
				flag1=1;
				break;
			}	
		}
		if(flag1==0) cout<<"No"<<endl;
	
	}
	
	return 0;
}
