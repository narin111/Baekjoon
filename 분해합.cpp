#include<iostream>
using namespace std;

int sep(int n){
	int sum=0;
	while(n!=0){
			int R= n%10;
			sum+=R;
			n/=10;
	}
	return sum;
}

int main(){
	int num, sep_sum , sum=0, c=0;
	cin >> num;
	for(int i=1; i<=1000000; i++){
		sep_sum=sep(i);
		if(num == sep_sum + i){
			c=1;
			cout << i;
			break;
		}

	}
	if(c==0) cout << 0 ;
	return 0;
}
