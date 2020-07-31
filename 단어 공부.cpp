#include<bits/stdc++.h>
using namespace std;

int arr[26];

int main(){
	int len, abc, max=0, cnt=0, ans;
	string word;
	cin >> word;
	len=word.length();
	for(int i=0; i<len; i++){
		abc=(int)word[i];
		if(abc>=97) arr[abc-97]++;
		if(abc<97) arr[abc-65]++;
	}
	for(int i=0; i<26; i++){
		if(max<arr[i]) max=arr[i];
	} 
	
	for(int i=0; i<26; i++){
		if(max==arr[i]){
			ans=i;
			cnt++;
		}
	}	
	if(cnt==1) cout <<(char)(ans+65);
	if(cnt>=2) cout << "?";
	return 0;
}
