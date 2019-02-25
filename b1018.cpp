#include <iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cin>>n;
	string jia,yi;
	int a[3]={0},b[3]={0};//b0,c1,j2
	string s[3] = {"B","C","J"};
	int jiawin=0,yiwin=0;
	for(int i = 0;i<n;i++){
		cin>>jia>>yi;
		if(jia=="B"&&yi=="C"){
			jiawin++;
			a[0]++;
		}
		if(jia=="C"&&yi=="J"){
			jiawin++;
			a[1]++;
		}
		if(jia=="J"&&yi=="B"){
			jiawin++;
			a[2]++;
		}
		if(jia=="C"&&yi=="B"){
			yiwin++;
			b[0]++;
		}
		if(jia=="B"&&yi=="J"){
			yiwin++;
			b[2]++;
		}
		if(jia=="J"&&yi=="C"){
			yiwin++;
			b[1]++;
		}			
	}
	int ping = n-jiawin-yiwin;
	cout<<jiawin<<" "<<ping<<" "<<yiwin<<endl;
	cout<<yiwin<<" "<<ping<<" "<<jiawin<<endl;
	int jiamax = 0,yimax = 0,jianum,yinum; 
	for(int i = 2;i>=0;i--){
		if(a[i]>=jiamax){
			jiamax = a[i]; 
			jianum = i;
		}
		  
		if(b[i]>=yimax){
			yimax = b[i];
			yinum = i;
		} 
	}
	cout<<s[jianum]<<" "<<s[yinum];
	return 0;
}

