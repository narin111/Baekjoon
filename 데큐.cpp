#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

void push_f(int x){
	dq.push_front(x);
}
void push_b(int x){
	dq.push_back(x);
}
int pop_f(){
	if(dq.empty()) return -1;
	int x=dq.front();
	dq.pop_front();
	return x;
}
int pop_b(){
	if(dq.empty()) return -1;
	int x=dq.back();
	dq.pop_back();
	return x;
}
int size(){
	return dq.size();
}
int empty(){
	if(dq.empty()) return 1;
	else return 0;
}
int front(){
	if(!dq.empty()) return dq.front();
	else return -1; 
}
int back(){
	if(!dq.empty()) return dq.back();
	else return -1; 
}
int main(){
	int N, num;
	string com;
	cin >>N;
	for(int i=0; i<N; i++){
		cin >> com;
		if(com=="push_front"){
			cin >> num;
			push_f(num);
		}
		else if(com=="push_back"){
			cin >> num;
			push_b(num);
		}
		else if(com=="pop_front") cout << pop_f() << "\n";
		else if(com=="pop_back") cout <<  pop_b() << "\n";
		else if(com=="size") cout <<  size() << "\n";
		else if(com=="empty") cout <<  empty() << "\n";
		else if(com=="front") cout <<  front() << "\n";
		else if(com=="back") cout <<  back() << "\n";
	}
	
	return 0;
} 
