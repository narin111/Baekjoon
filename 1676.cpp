#include<iostream>
using namespace std;
// ���丮�� 0�� ����
// 0�� 2���� ������ ���μ����ط� �� �� �ִ�.
// �׻� 2�� ������ ����.
// �ٽ�: 5�� ������ ��ΰ�
// 100�� 5�� ������ -> 20��
// 100�� 5*5�� ������ -> 4��
  
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
