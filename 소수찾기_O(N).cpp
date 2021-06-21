#include<iostream>
using namespace std;

// �Ҽ� 
// 1. � �� N�� �Ҽ����� �Ǻ� 
// 2. N���� �۰ų� ���� ��� �ڿ��� �߿��� �Ҽ��� ã�Ƴ��� ���

//�⺻��� 
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

// �ð� ���̱� 
// N = a * b
// a ���� ���� ���� 2, b�� N/2�� ���� �ʴ´� 
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
