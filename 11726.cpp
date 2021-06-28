#include<iostream>
using namespace std;

// 가장 오른쪽에 타일을 놓을 수 있는 방법은 두가지 
// 1. 세로 직사각형
// 2. 가로 직사각형 2개

// 2*n 을 채우는 경우의 수 => D[n] 
// 1. 크기 2*(n-1) 에 세로블럭
// 2*(n-1)을 채우는 경우의 수 => D[n-1] 

// 2. 경우의 수 D[n-2] 

// D[n] = D[n-1] + D[n-2]

int D[1001];

int main(){
	int num;
	cin >> num;
	D[0]=0;
	D[1]=1;
	D[2]=2;
	for(int i=3; i<=num; i++){
		D[i] = (D[i-1]+D[i-2])%10007;
	}
	
	cout << D[num];
		
	return 0;
}
