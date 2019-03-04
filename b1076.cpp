#include <iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin>>n;
	char a,b;
	for(int i = 0;i<n*8;i++){//说实话我不知道为啥要n*8,我用n*4有错 
		scanf("%c-%c",&a,&b);
		if(b=='T'){
			if(a=='A') cout<<"1";
			if(a=='B') cout<<"2";
			if(a=='C') cout<<"3";
			if(a=='D') cout<<"4";
		}
	}
	return 0;
}

