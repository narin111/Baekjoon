#include<iostream>
#include<stack>

using namespace std;
// A[i]를 만들기 위해서는 1-A[i] 이 push 되어있어야함  


int main(){
	int n;
	string ans;
	stack<int> s; 
	cin >> n; 
	int m = 0; // 스택에 들어간 마지막 수 
	 
	while(n--){
		int x;
		cin >> x;
		if (x > m){
			while(x > m){ // 처음 입력받은수까지 스택에 입력  
				s.push(++m);
				ans += "+\n"; // 그 수까지 push 연산 
			}
			s.pop();
			ans += "-\n";
		} else{
			bool found = false;
			if(!s.empty()){
				int top = s.top();
				s.pop();
				ans += "-\n";
				if(x == top){ // 해당 수가 나올 때까지 
					found = true;
				}
			}
			if (!found){
				cout << "NO" << '\n';
				return 0;
			}
		}
	} 
	cout << ans;
	return 0;
} 
