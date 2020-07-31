#include<bits/stdc++.h>
using namespace std;

deque<int> y;
int a[1000];
void pop_push(){
	int x;
	x=y.front();
	y.pop_front();
	y.push_back(x);
}
int main(){
	int n, k, yo;
	cin >> n >> k;
	for(int i=1; i<=n; i++){
		y.push_back(i);
	}
	cout << "<";
	while(y.size()>0){
		for(int i=0; i<k-1; i++){
			pop_push();
		}			
		yo=y.front();
		y.pop_front();
		cout << yo;
		if(y.size()>0) cout << ", ";
	}
	cout << ">";
	return 0;
}
