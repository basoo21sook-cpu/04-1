#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b; 
	int sum,diff,prod,quot,mod;
	
	printf("두 개의 정수를 입력하세요 :");
	scanf("%i %i", &a,&b);
	
	sum = a+b;
	diff= a-b;
	prod= a*b;
	quot= a/b;
	mod=a%b;
	
	printf("%d+%d=%d\n",a,b,sum);
	printf("%d-%d=%d\n",a,b,diff);
	printf("%d-%d=%d\n",a,b,prod);
	printf("%d/%d=%d\n",a,b,quot);
	printf("%d %% %d = %d\n",a,b,mod);
	
	return 0;
}
