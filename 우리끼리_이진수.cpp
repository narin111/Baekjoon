#include<stdio.h>

char bb[100000];

int main(){
	int n, k, index=-1; 
	scanf("%d %s %d", &n, &bb, &k);
	for(int i=n; i<n+k; i++){
		bb[i]=48;
	}
	for(int i=0; i<n+k; i++){
		if(bb[i]-48==1){
			index=i;
			break;
		}
	}
	if(index==-1){
		printf("0");
	}
	else{
		for(int i=index; i<n+k;i++){
		printf("%d", bb[i]-48);
		}
	}
	
	
	return 0;
}

