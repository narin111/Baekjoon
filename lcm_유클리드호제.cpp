#include<iostream>
using namespace std;

// A*B= �ִ����� * �ּҰ����

int gcd(int a, int b){
	if(b==0){
		return a;
	} else{
		return gcd(b, a%b);
	}
} 

int main(){
	int a, b;
	cin >> a >> b;
	int big = gcd(a, b);
	int ans;
	ans = a*b/big;
	cout << ans;
} 
