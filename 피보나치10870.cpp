#include<iostream>
using namespace std;

int fibo(int n){
	if(n==0) return 0;
	if(n==1) return 1;
	n=fibo(n-1)+fibo(n-2);
	return n;
}

int main(){
	int num;
	cin >> num;
	cout << fibo(num);
	return 0;
}
