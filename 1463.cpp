//3���� ������ �������鼭 2�ε� ����������� ��
//��� �ϸ� ����ȭ? 
//������ �ظ� dp�� ���� 
#include<bits/stdc++.h>
using namespace std;
//down
int dp[1000005]; 
 
int f(int n)
{
	if(dp[n]!=-1) return dp[n]; //�Ա��� 
	else if(n==1) return dp[1]=0;
	int res = f(n-1)+1;
	if(n%3==0) res=min(res, f(n/3)+1);
	if(n%2==0) res=min(res, f(n/2)+1);
	return dp[n]=res;//
} 
using namespace std;

int main(){
	//dp[i]=-1; //������ ���� ���� ���� 
	int n;
	cin >>n;
	for(int i=1; i<1000005; i++){
		dp[i]=-1;
	}
	cout << f(n);
	return 0;
} 
