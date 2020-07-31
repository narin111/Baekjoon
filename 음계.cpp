#include<bits/stdc++.h>
using namespace std;
int mel[9]; 

int main(){
	int as=0, des=0;
	for(int i=0; i<8; i++){
		cin >> mel[i];
	}
	for(int i=1; i<8; i++){
		if(mel[i-1]<mel[i]) as++;
		if(mel[i-1]>mel[i]) des++;
	}
	if(as>0 && des>0) cout << "mixed";
	if(des==0 && as>0) cout << "ascending";
	if(as==0 && des>0) cout << "descending";
	
	return 0;
}
