#include<iostream>
using namespace std;
// N이하의  소수찾기
// 에라토스테네스의 체 
// 지워지지 않은 수의 배수가 되는 수 
// 2, 3, 4....의 배수 모두 지우기 
// 3*2 는 이미 지워져있는 수 3*3부터 시작..
// N*N 부터 지우자
// 소수 구하는 문제 중 제일 유용
// 모든 소수는 6N+1 6N+5 임을 이용할수도 있다(에토테스 x) 

int main(){
	int prime[100]; // 소수 저장 
	int pn=0; // 소수 개수 
	bool check[101]; // 지워졌으면 true 
	int n=100; // 100까지의 소수 구하기 
	
	for(int i=2; i<=n; i++){
		if(check[i]==false){
			prime[pn++]=i;
			// (i+i)(i*2)로 하는 것이 좋다.
			// i가 백만인 경우 오버플로우 발생가능 
			for(int j=i*i; j<=n; j+=i){
				check[j] = true;
			}
		}
	}
	for(int i=0; i< pn; i++){
		cout << prime[i] << " ";
	}	
	return 0;
} 
