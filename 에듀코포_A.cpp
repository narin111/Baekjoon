#include<stdio.h>

int main(){
	int t, b, p, f, bp, sp, price, h, c, big;
	scanf("%d", &t);
	for(int i=0; i<t; i++)
	{
		scanf("%d %d %d", &b, &p, &f);
		scanf("%d %d", &h, &c);
		if(h<c){
			big=f;	bp=c;	sp=h;
		}
		else{
			big=p;	bp=h;	sp=c;	
		}
		
		if(p+f<b/2) price=p*h+f*c;
		else
		{
			if(big*2<b)
			{
				price=big*bp;
				price+=(b-big*2)/2*sp;
			} 
			else
			{
				if(b==1){
					price=0;
				}
				else{
					price=b/2*bp;
				}
			}
		}
		printf("%d\n", price);
		price=0;
	}
	return 0;
}
