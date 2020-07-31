#include<bits/stdc++.h>
using namespace std;

int main(){
	int len, cnt=1;
	string word;
	getline(cin, word); //공백포함
	len=word.length();
	for(int i=0; i<len; i++){
		if(word[i]==' '){
			cnt++;
		}
	} 
	if(word[0]==' ') cnt-=1;
	if(word[len-1]==' ') cnt-=1;
	
	cout<<cnt;
	return 0;
}
