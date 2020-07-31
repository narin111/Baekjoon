#include<stdio.h>

int main(){
	int w, h, n, gcd=1; 
	scanf("%d %d", &w, &h);
	if(w<h) n=w;
	else n=h;
	for(int i=3; i<=n; i+=3){
		if(w%i==0 && h%i==0) gcd=i;
	}
	printf("%d", (w/gcd)*(h/gcd));
	return 0;
}
