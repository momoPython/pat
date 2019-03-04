#include <iostream>
using namespace std;
int main() {
	int m, n, a, b, num, temp;
	scanf("%d%d%d%d%d", &m, &n, &a, &b, &num);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &temp);
			if (temp >= a && temp <= b)
				temp = num;
			if (j != 0) printf(" ");
			printf("%03d", temp);
		}
		printf("\n");
	}
	return 0;
}

//#include <iostream>
//#include<vector>
//using namespace std;
//int main() {
//	int n,m,a,b,t;
//	cin>>n>>m>>a>>b>>t;
//	if(n==0){
//		cout<<"0";
//		 return 0;
//	}
// 	vector<int> v(n*m);
//	for(int i = 0;i<m*n;i++){
//		cin>>v[i];
//		if(v[i]>=a&&v[i]<=b) v[i] = t;
//	}
//	for(int i = 1;i<=m*n;i++){//此处输出有问题,暂时不管 
//		if(i%m!=1) cout<<" ";
//		printf("%03d",v[i-1]);
//		if(i%m==0) cout<<endl;
//	}
//	return 0;
//}
