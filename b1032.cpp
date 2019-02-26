#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int a[100] = {0};
int main() {
	int n;
	cin>>n;
	int school,score;
	for(int i = 0;i<n;i++){
		cin>>school>>score;
		a[school] += score; 
	}
	int maxschool = 0,maxscore = 0;
	for(int i = 0;i<100;i++){
		if(a[i]>maxscore){
			maxschool = i;
			maxscore = a[i];
		}
	}
	cout<<maxschool<<" "<<maxscore;
	return 0;
}

