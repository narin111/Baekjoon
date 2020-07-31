#include<iostream>
using namespace std;
int arr[101];

int main(){
	int N, M, R, ans=0;	
	cin >> N >> M;
	for(int i=0; i<N; i++){
		cin >> arr[i];
	}
	for(int i=0; i<N; i++){
		for(int j=i+1; j<N; j++){
			for(int k=j+1; k<N; k++){
				R = arr[i]+arr[j]+arr[k];  
				if (R<=M && M-R<M-ans){
                    ans=R;	
                }								
			}
		}
	}
	cout << ans;
	return 0;
}
