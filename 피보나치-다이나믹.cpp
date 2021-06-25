#include<iostream>
using namespace std;
// 다이나믹 프로그래밍
// 큰 문제를 작은 문제로 나눠서 푸는 알고리즘 
// 동적 계획법 
// 1. DP  
// 2. 분할정복 (D&C)
// 분할정복은 중복이 발생하지 않는다.
// DP는 중복이 발생하므로 효율적으로 알고리즘 짜는 것이 중요 

// 작은 문제와 큰 문제 해결방법 같다.  (Overlapping Subproblem)
// 최적 부분 구조- 문제의 정답을 작은 문제 정답에서 구한다.  (Optimal Substructure) 


// O(N^2) 였던 피보나치를 더욱 효율적으로
// 모든 문제를 1번씩 푼다. => 문제의 개수 * 문제 1개를 푸는 시간 
// 문제 1개를 푸는 시간 == 함수의 시간복잡도


 
// Memorization  
int memo[100];
int fibo(int n){
	if(n<=1){
		if(n<=1){
			return n;
		} else{
			if(memo[n] > 0){ // memo가 0이 아니면 답을 구한 적이 있다.
				return memo[n];
			
			} 
			memo[n] = fibo(n-1) + fibo(n-2);ㄴ 
			return memo[n];
		}
	}
}
int main(){
	int num;
	cin >> num;
	cout << fibo(num);
	
	return 0;
}
