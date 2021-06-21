#include<iostream>
using namespace std;

// N�� �Ҽ��� �ƴ϶�� N=a*b 
// a�� ��ƮN���� ������ b�� ��ƮN���� Ŭ �� �ۿ� ����. 
// ��Ʈ N���� ���� ������ �������� �ȴ�.
// ���⵵ O(N^0.5)
// 1 2 3 4 6 8 12 24 .... 4.xxx ���� ���� �������� �˻�

bool prime(int n){
	if(n<2){
		return false;
	}
	// �Ǽ� ǥ�� �ִ��� ���� �ʴ� ���� �ٶ���
	// i*i�� ǥ������  
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
