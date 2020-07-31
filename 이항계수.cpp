#include<bits/stdc++.h>
using namespace std;
int pas[11][11];

int main(){
	int n, k;
	pas[0][0]=1;
	for(int i=1; i<=10; i++){
		pas[i][0]=1;
		for(int j=1; j<=10; j++){
			pas[i][j]=pas[i-1][j-1]+pas[i-1][j];	
		}
	}
	cin >> n >> k;
	cout << pas[n][k];
	
	return 0;
}
