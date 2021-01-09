#include<iostream>
#include<stack>
#include<string>
using namespace std;
//시간복잡도 O(N)
 
int main(){
	ios_base::sync_with_stdio(false);
	//cin.tie(nullptr);
	int t;
	cin >> t;
	//getline을 쓰면 입력받은 모든 것을 str에 넣음 
	//ignore 없다면 첫번째 문자에서 빈문자 입력받게됨 
	cin.ignore(); 
	
	while(t--){
		string str;
		getline(cin, str); // 문자열의 뒤에 항상 개행문자 삽입  
		str += '\n';
		stack<char> s;
	
		for(char ch : str) {
			if(ch==' ' || ch == '\n') { // 빈칸이나 개행문자일 때는 stack에 있는것을 출력 	if(ch==' ' || ch == '\n'){ // 빈칸이나 개행문자일 때는 stack에 있는것을 출력 
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
