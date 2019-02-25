#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int c1,c2;
	cin>>c1>>c2;
	int hour,min,second;
	second = (c2-c1+50)/100;//ËÄÉáÎåÈë
	hour = second/3600;
	min = (second - hour*3600)/60;
	second = second-hour*3600-min*60;
//	cout<<hour<<":"<<min<<":"<<second;
	printf("%02d:%02d:%02d",hour,min,second);
	return 0;
}

