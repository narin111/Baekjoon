#include<bits/stdc++.h>
using namespace std;
//점화식 구하기 
//f(n)=f(n-1)(1더하면 되는 것)+f(n-2)(+2)+f(n-3)(+3);

int arr[12];

int dp(int n){
	if(arr[n]) return arr[n];
	if(n==1) return arr[1]=1;
	else if(n==2) return arr[2]=2;
	else if(n==3) return arr[3]=4;
	return arr[n]=dp(n-1)+dp(n-2)+dp(n-3);
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << dp(n) << "\n"; 
	}
	return 0;
}
