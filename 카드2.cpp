#include<bits/stdc++.h>
using namespace std;
deque<int> dq;

int main(){
	int cardnum, topcard;
	cin >> cardnum; 
	for(int i=1; i<=cardnum; i++){
		dq.push_back(i);
	}
	while(cardnum>1){
		dq.pop_front();
		topcard=dq.front();
		dq.pop_front();
		dq.push_back(topcard);
		cardnum--;
	} 
	cout << dq.front();
	return 0;
} 
