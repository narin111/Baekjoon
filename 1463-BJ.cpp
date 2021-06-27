#include<iostream>
using namespace std;
// 10:11

int d[1000000];
// d[n] : n�� 1�� ����� �ּ� ���� Ƚ�� 
int go (int n){ //top down
	// 1�� ����⿡�� ���� ���� ������ 1�� 1�� �����
	// (�Ǻ���ġ�� ��쿡�� f0=1 f1=1 �̿���.) 
	if(n==1){
		return 0;
	} 
	// 0���� ũ�ٸ� ������ ������ ���� �ִ�. 
	if( d[n]>0 ){
		return d[n]; //�޸������̼� 
	} 
	d[n] = go(n-1)+1;
	if(n%2==0){
		// n�� 2�� ������ ����Ƚ��
		// ������ ���� go(n/2) 
		int temp = go(n/2)+1;  
		if(d[n]> temp) d[n] = temp;
	}
	if(n%3==0){
		int temp = go(n/3) +1;
		if(d[n]>temp) d[n]=temp;
	}
	return d[n];
}
 
int bottomup(int n){
	for(int i=2; i<=n; i++){
		d[i] = d[i-1] +1;
		if(i%2 == 0 && d[i] > d[i/2] +1){
			d[i] = d[i/2] +1;
		}
		if(i%3 ==0 && d[i] > d[i/3] + 1){
			d[i] = d[i/3] +1 ;
		}
	}	
}

int main(){
	int num;
	
	cin >> num;
	cout << go(num);
	
	return 0;
} 
