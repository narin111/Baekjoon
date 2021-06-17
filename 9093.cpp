#include<iostream>
#include<stack>
#include<string>
using namespace std; 


int main(){
	// stack LIFO
	// 공백일 경우, 개행문자 
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	// getline - 한줄 모두 입력받아 str에 넣어줌
	// 마지막으로 입력받은 것부터 개행문자가 나올때까지 입력받음
	// cin.ignore - t입력 받고난 뒤 빈문자 무시하겠다  
	cin.ignore();
	while(t--){
		string str;
		getline(cin, str);
		str += '\n';
		stack<char> s;
		for(char ch : str){
			if(ch == ' ' || ch == '\n'){
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
