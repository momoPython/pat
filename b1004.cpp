#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	string name,maxname,minname,number,maxnumber,minnumber;
	int score,max = -1,min=101;
	for(int i = 0;i<n;i++){
		cin>>name>>number>>score;
		if(score>max){
			maxname=name;
			maxnumber = number;
			max = score;
		}
		if(score<min){
			minname = name;
			minnumber = number;
			min = score;
		}
	}
	cout<<maxname<<" "<<maxnumber<<endl;
	cout<<minname<<" "<<minnumber;
	return 0;
}
