#include<stdio.h>

int main(){
	int test, i, j;
	long long candy, ans, sum=0;
	scanf("%d", &test);
	for(i=0; i<test; i++){
		for(j=0; j<3; j++){
			scanf("%lld", &candy);
			sum+=candy;
		}
		ans=sum/2;
		printf("%lld\n", ans);
		sum=0;
	}
		
	return 0;
}
