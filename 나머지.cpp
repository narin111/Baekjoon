#include<bits/stdc++.h>
using namespace std;
int arr[42];

int main(){
	int num, cnt=0;
	for(int i=0; i<10; i++){
		cin >> num;
		arr[num%42]=1;
	}
	for(int i=0; i<42; i++){
		if(arr[i]==1) cnt++;
	}
	cout << cnt;
	return 0;
}
 
