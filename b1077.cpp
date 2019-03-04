#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N,M;
	cin>>N>>M;
	vector<double> v,v1;
	double score,temp;
	for(int i = 0;i<N;i++){
		cin>>score;
		double max = -1,min=101,sum=0,count=0;
		for(int j = 0;j<N-1;j++){
			cin>>temp;
			if(temp<0||temp>M) continue;
			sum+=temp;
			count++;
			if(temp>max) max = temp;
			if(temp<min) min = temp;
		}
		cout<<(int)((((sum-max-min)/(count-2))+score)/2+0.5)<<endl;
	}
	return 0;
}

