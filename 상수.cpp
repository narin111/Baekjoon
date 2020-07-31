#include<bits/stdc++.h>
using namespace std;

int reverse(int X)
{
	return (X%10)*100+(X/10%10)*10+X/100;
} 
int main(){
	int A, B, numA, numB;
	cin >> A >> B;
	numA=reverse(A);
	numB=reverse(B);
	cout << max(numA, numB);
	return 0;
}
