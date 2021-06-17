#include<iostream>
#include<stack>

using namespace std;
// A[i]�� ����� ���ؼ��� 1-A[i] �� push �Ǿ��־����  


int main(){
	int n;
	string ans;
	stack<int> s; 
	cin >> n; 
	int m = 0; // ���ÿ� �� ������ �� 
	 
	while(n--){
		int x;
		cin >> x;
		if (x > m){
			while(x > m){ // ó�� �Է¹��������� ���ÿ� �Է�  
				s.push(++m);
				ans += "+\n"; // �� ������ push ���� 
			}
			s.pop();
			ans += "-\n";
		} else{
			bool found = false;
			if(!s.empty()){
				int top = s.top();
				s.pop();
				ans += "-\n";
				if(x == top){ // �ش� ���� ���� ������ 
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
