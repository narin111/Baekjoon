#include<iostream>
using namespace std;

int w_arr[51];
int h_arr[51];
int grad[51]={0, };

int main(){
	int pep, cnt=1;
	cin >> pep;
	for(int i=0; i<pep; i++){
		cin >> w_arr[i] >> h_arr[i];
	}
	
	for(int i=0; i<pep; i++){
		for(int j=0; j<pep; j++){
			if(w_arr[i]<w_arr[j] && h_arr[i]<h_arr[j]){
				cnt++;
			}
		}
		grad[i]=cnt;
		cnt=1;
	}
	for(int i=0; i<pep; i++) 
		cout << grad[i] << " " ;
	return 0;
}
