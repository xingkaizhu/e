#include <stdio.h>
int main(){
	int n;
	printf("n=");
	scanf("%d",&n);
	if(n%400==0)
	printf("n is runnian");
	else if(n%100!=0&&n%4==0)
	printf("n is runnian"); 
	else printf("n is not runnian");
	return 0;
}
 
