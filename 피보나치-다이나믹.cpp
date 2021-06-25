#include<iostream>
using namespace std;
// ���̳��� ���α׷���
// ū ������ ���� ������ ������ Ǫ�� �˰��� 
// ���� ��ȹ�� 
// 1. DP  
// 2. �������� (D&C)
// ���������� �ߺ��� �߻����� �ʴ´�.
// DP�� �ߺ��� �߻��ϹǷ� ȿ�������� �˰��� ¥�� ���� �߿� 

// ���� ������ ū ���� �ذ��� ����.  (Overlapping Subproblem)
// ���� �κ� ����- ������ ������ ���� ���� ���信�� ���Ѵ�.  (Optimal Substructure) 


// O(N^2) ���� �Ǻ���ġ�� ���� ȿ��������
// ��� ������ 1���� Ǭ��. => ������ ���� * ���� 1���� Ǫ�� �ð� 
// ���� 1���� Ǫ�� �ð� == �Լ��� �ð����⵵


 
// Memorization  
int memo[100];
int fibo(int n){
	if(n<=1){
		if(n<=1){
			return n;
		} else{
			if(memo[n] > 0){ // memo�� 0�� �ƴϸ� ���� ���� ���� �ִ�.
				return memo[n];
			
			} 
			memo[n] = fibo(n-1) + fibo(n-2);�� 
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
