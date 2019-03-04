#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v[5];
	int t,a1=0,a2=0,a3=0,a5=0;
	double a4 = 0.0;
	for (int i = 0; i < n; i++){
		cin >> t;
		v[t % 5].push_back(t);
	}

	for (int i = 0; i < 5; i++){
			for (int j = 0; j < v[i].size(); j++){

				if (i==0&&v[i][j] % 2 == 0)
					a1 += v[i][j];
				if (i == 1 && j % 2 == 0)
					a2 += v[i][j];
				if (i == 1 && j % 2 != 0)
					a2 -= v[i][j];
				if (i == 3) a4 += v[i][j];
				if (i == 4 && v[i][j]>=a5)
					a5 = v[i][j];
			}
	}
	for (int i = 0; i < 5; i++){
		if (i != 0) cout << " ";
		if (i == 0 && a1 == 0 || i != 0 && v[i].size() == 0){
			cout << "N"; continue;
		}
		if (i == 0) cout << a1;
		if (i == 1) cout << a2;
		if (i == 2) cout << v[i].size();
		if (i == 3) printf("%.1f", a4 / v[i].size());
		if (i == 4) cout << a5;
	}
	return 0;
}
