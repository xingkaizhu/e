#include <stdio.h>
int main(){
	long n,t,j,k,i;
	for(n=1;;n++){
		k=0;
		for(i=1;i<=n;i++)
		{for(j=1;j<=i;j=j*10)
		{
			t=(i-(i/(10*j))*10*j)/j;
			if(t==1)
			k=k+1;
			 
		}		
		}
		
		if (k==n)
		printf("%d",n); 		
	}
	return 0;
} 
 
