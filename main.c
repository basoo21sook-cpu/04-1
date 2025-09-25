#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int total;
	int hours, minutes, seconds;
	
	printf("Input the seconds:");
	scanf("%d", &total);
	
	hours = total/3600;
	minutes = (total%3600)/60;
	seconds= total%60;
	
	printf("The time for %d seconds is %d:%d:%d\n", total, hours, minutes, seconds);
	
	
	return 0;
}
