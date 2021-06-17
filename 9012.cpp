#include<iostream>
#include<stack>
#include<string>
using namespace std;

// ��ȣ 9012 
// �ݴ� ��ȣ�� ���ؼ� ���� ��ȣ ã��


// O(N^2)
string valid(string s){
	int cnt=0;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='('){
			cnt +=1;
		} else {
			cnt -=1;
		}
		if(cnt<0){
			return "NO";
		}
	}
	if(cnt==0){
		return "YES";
	} else {
		return "NO"; 
	}
}
int main(){
	int t; 
	cin >> t;
	string s;
	while(t--){
		cin >> s;
		cout << valid(s);
	}
	return 0;
}
