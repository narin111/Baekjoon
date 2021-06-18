#include<iostream>
#include<stack>
#include<vector>
using namespace std;
// ��ū���� ��������
 
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
		// a[i]�� ��ū���� ��  ã�´�. 
		while(!s.empty() && a[s.top()] < a[i]){
			ans[s.top()] = a[i];
			s.pop();
		}
		s.push(i);
	}
	// ��ū���� ��ã�� ���� -1 �־��ְ� pop 
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
