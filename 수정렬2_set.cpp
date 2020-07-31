#include<bits/stdc++.h>
using namespace std;

set<int> st;
//set<int>::iterator it;
 
int main(){
	int N, num;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> num;
		st.insert(num);
	} 
	for(set<int>::iterator it=st.begin(); it!=st.end(); it++){
		cout << *it << '\n';
	}
	return 0;
}
