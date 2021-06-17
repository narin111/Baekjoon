#include<iostream>
#include<stack>
using namespace std;

// BFS���� ť ���� ���� 
// begin - end
// O(N) 

void print(stack<char> &s){
	while(!s.empty()){
		cout << s.top();
		s.pop();
	}
}
 
int main(){
	string str;
	getline(cin, str);
	bool tag = false; // �±����� ���� 
	stack<char> s;
	for(char ch : str){
		if(ch == '<'){ // �ܾ� ������ �±�<>...< 
			print(s); 
			tag = true;
			cout << ch;
		} else if(ch == '>'){
			tag = false;
			cout << ch;
		} else if(tag){
			cout << ch;
		} else{
			if(ch == ' '){
				print(s); // �ܾ �ܾ� ������ ��� 
				cout << ch;
			} else {
				s.push(ch); //�ܾ� �ȳ��� 
			}
		}
	} 
	print(s);
	cout << '\n';
	return 0;
}