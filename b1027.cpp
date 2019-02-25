#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int n;
	char c;
	cin>>n>>c;
//	2*n*n-1 总个数 
//	for(int i = 0;i<) 
	int i = 0;
	while(i*i*2-1<n){
		i++;
	}
	i--;
	//此处求出了行数 每行2*i-1
	for(int j = i;j>0;j--){
		for(int k=0;k<2*j-1;k++){
			cout<<c;
		}
		for(int m = j;m<i;m++){
			
		}
		cout<<endl;
	} 
	 
	
	return 0;
}

