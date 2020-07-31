#include<bits/stdc++.h>
using namespace std;

int main(){
	int T, H, W, N;
	int floor, room;
	cin >> T;
	for(int i=0; i<T; i++)
	{
		cin >> H >> W >> N;
		floor=N%H;
		room=N/H;
		if(floor>0) room++;
		else floor=H;
		cout << floor*100+room <<endl;
	}
	return 0;
}
