//bottom up 123을 먼저 구해놓는다
//4 갈수 있는 곳 3,2 5 갈수 있는곳 4... 반복 
#include<bits/stdc++.h>
using namespace std;
//up
int dp[1000005]; 
int main(){
	int n;
	cin >> n;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	for(int i=4; i<=n; i++){
		int res=i;
		if(i%3==0) res=min(res, dp[i/3]+1);
		if(i%2==0) res=min(res, dp[i/2]+1);
		res=min(res, dp[i-1]+1);
		dp[i]=res;
	}
	cout << dp[n];
	return 0;
} 
