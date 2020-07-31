#include<bits/stdc++.h>
#include<stack>
using namespace std;

stack<int> s;

void push(int x){
	s.push(x);
}

int pop(){
	int sp;
	if(!s.empty()){
		sp=s.top();
		s.pop();
		return sp;
	}
	else return -1;
}

int size(){
	return s.size();
}

int empty(){
	if(s.empty()) return 1;
	else return 0;
}

int top(){
	if(s.empty()) return -1;
	return s.top();
}

int main(){
	int N, num;
	string com;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> com;
		if(com=="push"){
			cin >> num;
			push(num);
		}
		else if(com=="top")	cout << top() << "\n";
		else if(com=="size") cout << size() << "\n";
		else if(com=="empty") cout << empty() << "\n";
		else if(com=="pop") cout << pop() << "\n";
	}
	return 0;
}
