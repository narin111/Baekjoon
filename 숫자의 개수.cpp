#include<bits/stdc++.h>
using namespace std;
int arr[10];

int main(){
	int A, B, C, num, cnt=0;
	cin >> A >> B >> C;
	num=A*B*C;
	while(num>0)
	{
		arr[num%10]++;
		num/=10;
	}
	
	for(int i=0; i<10; i++){
		cout << arr[i] << "\n";
	}
	return 0;
} 
