#include<iostream>
#include<stack>
#include<cstring>

using namespace std;
char a[600000]; 

// O(M^2) �ʹ� �����ɸ���. -> ���� ����ϱ�  
// Ŀ���� �������� ����/������ ����
// ������ �ΰ� �Ẹ��
// ��ũ�� ����Ʈ: Ư����ġ ����, ���� ȿ����
// ����/ ������ �д� ���� �� ����� ��. 
 
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
