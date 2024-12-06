#include <stdio.h>
int f(int n,int &jumlah){
	if (n == 0){
		return 1;
	}else if (n == 1){
		return 2;
	}else if (n % 5 == 0){
		if (n % 3 == 0){
			jumlah += 1;
		}
		return n * 2;
	}else{
		if (n % 3 == 0){
			jumlah += 1;
		}
		return f(n-1,jumlah)+n+f(n-2,jumlah)+n-2;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	
	for (int i = 1;i <= t;i++){
		int n;
		scanf("%d",&n);
		int jumlah = 0;
		int res = f(n,jumlah);
		
		printf("Case #%d: %d %d\n",i,res,jumlah);
	}
	return 0;
}
