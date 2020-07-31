#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1, num2, ans1, ans2;
	int big, sml;
	cin >> num1 >> num2;
	sml=min(num1, num2);
	big=max(num1, num2);
	int i=1;
	while(1){
		if((sml*i)%big==0){
			ans2=sml*i;
			break;
		}
		i++;
	}
	while(sml){
		if(num1%sml==0 && num2%sml==0){
			ans1=sml;
			break;
		}
		sml--;
	}
	cout << ans1 << "\n" << ans2; 
	return 0;
}
