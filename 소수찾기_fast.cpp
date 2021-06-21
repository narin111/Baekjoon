#include<iostream>
using namespace std;

// N이 소수가 아니라면 N=a*b 
// a는 루트N보다 작으면 b는 루트N보다 클 수 밖에 없다. 
// 루트 N보다 작은 수에서 나눠보면 된다.
// 복잡도 O(N^0.5)
// 1 2 3 4 6 8 12 24 .... 4.xxx 보다 작은 수에서만 검사

bool prime(int n){
	if(n<2){
		return false;
	}
	// 실수 표현 최대한 하지 않는 것이 바람직
	// i*i로 표현하자  
	for(int i=2; i*i<=n; i++){
		if(n%i ==0){
			return false;
		}
	}
	return true;
} 

int main(){
	int num;
	cin >> num;
	cout << prime(num);
	return 0;
}
