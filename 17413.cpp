#include<iostream>
#include<stack>
using namespace std;

// BFS에서 큐 많이 사용됨 
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
	bool tag = false; // 태그인지 구별 
	stack<char> s;
	for(char ch : str){
		if(ch == '<'){ // 단어 끝나고 태그<>...< 
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
				print(s); // 단어끝 단어 뒤집어 출력 
				cout << ch;
			} else {
				s.push(ch); //단어 안끝남 
			}
		}
	} 
	print(s);
	cout << '\n';
	return 0;
}
