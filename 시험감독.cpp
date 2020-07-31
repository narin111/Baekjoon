#include<bits/stdc++.h>
using namespace std;
vector<int> vec;

int main(){
	int N, num;
	long long cnt=0;
	int B, C;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> num;
		vec.push_back(num);
	}
	cin >> B >> C;
	for(int i=0; i<N; i++){
		if(vec[i]<=B) cnt++;
		if(vec[i]>B){
			cnt++;
			cnt+=(vec[i]-B)/C;
			if((vec[i]-B)%C!=0) cnt++;
		}
	}
	cout << cnt; 
	return 0;
}
