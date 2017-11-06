#include <stdio.h>
int main(){
	int a,b,c,t;
	printf("a=") ;
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	t=a;
	if(t<=b);
	{t=b;
	b=a;
	a=t;
	}
	if (t<=c)
	t=c;
	else if (c<=b)
	{a=b;
	b=c;
	}
	else a=c;
printf("from large to small:%d%d%d",t,a,b);
return 0;
	
	
	
} 
