#include<bits/stdc++.h>
using namespace std;


int main(){
	int score=0, plus=0, T;
	int len;
	string solve;
	cin >> T;
	for(int i=0; i<T; i++){
		cin >> solve;
		len=solve.length();
		for(int i=0; i<len; i++){
			if(solve[i]=='O'){
				plus++;
				score+=plus;	
			}
			if(solve[i]=='X'){
				plus=0;
			}
		}
	cout << score << "\n";
	score=0;
	plus=0;
	}
	
	return 0;
}
