#include<bits/stdc++.h>
using namespace std;

map<string, int> mp;
vector<string> vt;

int main(){
	int N, M;
	string name;
	int cnt=0;
	cin >> N >> M;
	for(int i=0; i<N; i++){
		cin >> name;
		mp[name]=1;
	}
	for(int i=0; i<M; i++){
		cin >> name;
		if(mp[name]==1){
			cnt++;
			vt.push_back(name);
		}	 
	}	
	sort(vt.begin(), vt.end());
	cout << cnt << '\n';
	for(int i=0; i<cnt; i++){
		cout << vt[i] << '\n';
	}

	return 0;
}
