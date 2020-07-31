#include<bits/stdc++.h>
using namespace std;
int num[1000000];

int main(){
	int N, min, max;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> num[i];
	}
	min=num[0];
	max=num[0];
	for(int i=1; i<N; i++){
		if(min>num[i]) min=num[i];
		if(max<num[i]) max=num[i];
	}
	cout << min << " " << max;
	return 0;
}
