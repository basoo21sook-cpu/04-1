#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int total;
	int minutes, seconds;
	
	printf("Input the seconds: ");
	scanf("%d", &total);
	
	minutes = total/60;
	seconds = total % 60;
	
	printf("The time is %d:%d\n", minutes, seconds);
	
	return 0;
}
