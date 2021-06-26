#include<iostream>
using namespace std;
// 10:11


// d[n] : n을 1로 만드는 최소 연산 횟수 
int go (int n){ //top down
	// 1로 만들기에서 가장 작은 문제는 1을 1로 만들기
	// (피보나치의 경우에는 f0=1 f1=1 이였다.) 
	if(n==1){
		return 0;
	} 
	// 0보다 크다면 이전에 연산한 적이 있다. 
	if(d[n]>0){
		return d[n]; //메모이제이션 
	} 
	d[n] = go(n-1)+1;
	if(n%2==0){
		// n을 2로 나누는 연산횟수
		// 나머지 연산 go(n/2) 
		int temp = go(n/2)+1;  
		if(d[n]> temp) d[n] = temp;
	}
	if(n%3==0){
		int temp = go(n/3) +1;
		if(d[n]>temp) d[n]=temp;
	}
	return d[n];
}



int main(){
	
	return 0;
} 
