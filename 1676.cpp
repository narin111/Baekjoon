#include<iostream>
using namespace std;
// 팩토리얼 0의 개수
// 0의 2개인 이유는 소인수분해로 알 수 있다.
// 항상 2의 개수가 많다.
// 핵심: 5의 개수가 몇개인가
// 100을 5로 나눈다 -> 20개
// 100을 5*5로 나눈다 -> 4개
  
int main(){
	int num;
	int sum=0;
	cin >> num;
	for(int i=5; i<=num; i*=5){
		sum+=(num/i);
	}

	cout << sum;
	return 0;
}
