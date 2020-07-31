#include<stdio.h>

float arr[1000];

int main(){
	float sub, max=0, sum=0;
	scanf("%f", &sub);
	for(int i=0; i<sub; i++){
		scanf("%f", &arr[i]);
		if(max<arr[i]) max=arr[i];
	}
	for(int i=0; i<sub; i++){
		sum+=arr[i]/max*100; 
	}
	printf("%f", sum/sub);
	return 0;
}

