#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// 오큰수를 기준으로
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> ans(n);
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	
	stack<int> s;
	s.push(0);
	
	for(int i=0; i<n; i++){
		if(s.empty()){
			s.push(i);
		}
		// a[i]가 오큰수인 수  찾는다. 
		while(!s.empty() && a[s.top()] < a[i]){
			ans[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	// 오큰수를 못찾은 수에 -1 넣어주고 pop 
	while(!s.empty()){
		ans[s.top()] = -1;
		s.pop();
	}
	for(int i=0; i<n; i++){
		cout << ans[i] << ' ';
	}
	cout << '\n';
	return 0;
}
