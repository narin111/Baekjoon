#include<iostream>
using namespace std;
//각각을 나머지 연산
 
int gcd(int a, int b){
	if(b==0){
		return a;
	} else{
		return gcd(b, a%b);
	}
} 

int gcdloop(int a, b){
	while(b!= 0){
		int r = a%b;
		a=b;
		b=r;
	}
	return a;
}

int main(){
	int a, b;
	
	cin >> a >> b;
	cout << gcd(a, b);
	
	return 0;
}
