#include<bits/stdc++.h>
using namespace std;
const int MAX =100000;

vector<int> vecnum;

int binarySearch(int low, int high, int key){
	if(low>high) return 0;
	else{
		int mid=(low+high)/2;
		if(vecnum[mid]==key) return 1;
		else if(vecnum[mid]>key) return binarySearch(low, mid-1, key);
		else return binarySearch(mid+1, high, key);
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, M, num;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> num;
		vecnum.push_back(num);
	}
	sort(vecnum.begin(), vecnum.end());
	cin >> M;
	for(int i=0; i<M; i++){
		cin >> num;
		cout << binarySearch(0, N-1, num) << "\n";
	} 
	return 0;
}

