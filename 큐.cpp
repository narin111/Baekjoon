#include<bits/stdc++.h>
using namespace std;

queue<int> q;

void push(int x){
	q.push(x);
}

int pop(){
	if(q.empty()) return -1;
	int x=q.front();
	q.pop();//
	return x;
}

int size(){
	return q.size();
}

int empty(){
	if(q.empty()) return 1;
	else return 0;
}

int front(){
	if(q.empty()) return -1;
	else return q.front();
}

int back(){
	if(q.empty()) return -1;
	else return q.back();
}

int main(){
	int N;
	string com;
	int num;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> com;
		if (com == "push") {
			cin >> num;
			push(num);
		}
		else if (com == "pop") {
			cout << pop() << "\n";
		}
		else if (com == "size") {
			cout << size() << "\n";
		}
		else if (com == "empty") {
			cout << empty() << "\n";
		}
		else if (com == "front") {
			cout << front() << "\n";
		}
		else if (com == "back") {
			cout << back() << "\n";
		}
	} 
	return 0;
}


