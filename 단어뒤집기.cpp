#include<iostream>
#include<stack>
#include<string>
using namespace std;
//�ð����⵵ O(N)
 
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);
	int t;
	cin >> t;
	//getline�� ���� �Է¹��� ��� ���� str�� ���� 
	//ignore ���ٸ� ù��° ���ڿ��� ���� �Է¹ްԵ� 
	cin.ignore(); 
	
	while(t--){
		string str;
		getline(cin, str); // ���ڿ��� �ڿ� �׻� ���๮�� ����  
		str += '\n';
		stack<char> s;
	
		for(char ch : str) {
			if(ch==' ' || ch == '\n') { // ��ĭ�̳� ���๮���� ���� stack�� �ִ°��� ��� 	if(ch==' ' || ch == '\n'){ // ��ĭ�̳� ���๮���� ���� stack�� �ִ°��� ��� 
				while(!s.empty()){
					cout << s.top();
					s.pop();
				}
				cout << ch;
			} else {
				s.push(ch);
			}
		}
	}
	return 0;
	
}
