#include<iostream>
using namespace std;

// ���� �����ʿ� Ÿ���� ���� �� �ִ� ����� �ΰ��� 
// 1. ���� ���簢��
// 2. ���� ���簢�� 2��

// 2*n �� ä��� ����� �� => D[n] 
// 1. ũ�� 2*(n-1) �� ���κ�
// 2*(n-1)�� ä��� ����� �� => D[n-1] 

// 2. ����� �� D[n-2] 

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
