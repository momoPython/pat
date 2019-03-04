#include <iostream>
using namespace std;
int main() {
	int T,K;
	cin>>T>>K;
	int n1,b,t,n2,total=T;
	for(int i = 0;i<K;i++){
		cin>>n1>>b>>t>>n2;
		if(t>total){
			printf("Not enough tokens.  Total = %d.\n",total);
		}else{
			if((n1>n2&&b==0)||(n1<n2&&b==1)){
			total+=t;
			printf("Win %d!  Total = %d.\n",t,total);
			}
			if((n1>n2&&b==1)||(n1<n2&&b==0)){
				total-=t;
				printf("Lose %d.  Total = %d.\n",t,total);
			}
		}
		if(total==0){
			printf("Game Over.");
			break;
		}
	}
	return 0;
}

