//3으로 나누어 떨어지면서 2로도 나누어떨어질수 있
//어떻게 하면 최적화? 
//최적의 해를 dp에 저장 
#include<bits/stdc++.h>
using namespace std;
//down
int dp[1000005]; 
 
int f(int n)
{
	if(dp[n]!=-1) return dp[n]; //입구컷 
	else if(n==1) return dp[1]=0;
	int res = f(n-1)+1;
	if(n%3==0) res=min(res, f(n/3)+1);
	if(n%2==0) res=min(res, f(n/2)+1);
	return dp[n]=res;//
} 
using namespace std;

int main(){
	//dp[i]=-1; //최적해 아직 저장 안함 
	int n;
	cin >>n;
	for(int i=1; i<1000005; i++){
		dp[i]=-1;
	}
	cout << f(n);
	return 0;
} 
