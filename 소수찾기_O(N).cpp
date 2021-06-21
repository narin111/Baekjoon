#include<iostream>
using namespace std;

// 소수 
// 1. 어떤 수 N이 소수인지 판별 
// 2. N보다 작거나 같은 모든 자연수 중에서 소수를 찾아내는 방법

//기본방법 
bool prime1(int n){
	if (n<2){
		return false;
	}
	for(int i=2; i<=n-1; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

// 시간 줄이기 
// N = a * b
// a 가장 작은 값이 2, b는 N/2를 넘지 않는다 
bool prime2(int n){
	if(n<2){
		return false;
	}
	for(int i=2; i<=n/2; i++){
		if(n%i ==0){
			return false;
		}
	}
	return true;
} 

int main(){
	int prm;
	cin >> prm;
	cout << prime1(prm);
	return 0;
}  
