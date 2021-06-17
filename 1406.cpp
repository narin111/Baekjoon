#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
char a[600000]; 

// O(M^2) 너무 오래걸린다. -> 스택 사용하기  
// 커서를 기준으로 왼쪽/오른쪽 스택
// 스택을 두개 써보자
// 링크드 리스트: 특정위치 삽입, 삭제 효율적
// 왼쪽/ 오른쪽 읽는 방향 잘 고려할 것. 
 
int main(){
	cin >> a;
	stack<char> left, right;
	
	int n = strlen(a);
	for(int i=0; i<n; i++){
		left.push(a[i]);
	}
	int m;
	cin >> m;
	while (m--){
		char cmd;
		cin >> cmd;
		if(cmd == 'L'){
			if(!left.empty()){
				right.push(left.top());
				left.pop();
			}
		}
		if(cmd == 'D'){
			if(!right.empty()){
				left.push(right.top());
				right.pop();
			}
		}
		if(cmd == 'B'){
			if(!left.empty()){
				left.pop();
			}
		}
		if(cmd == 'P'){
			char chr;
			cin >> chr;
			left.push(chr);
		}
	}
	while(!left.empty()){
		right.push(left.top());
		left.pop();
	}
	while(!right.empty()){
		cout << right.top();
		right.pop(); 
	}
	cout << "\n";
	return 0;
} 
