#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int input;
	int sec, min;
	
	printf("input the second : ");
	scanf("%i", &input);
	
	//calculate min
	min = input / 60;
	
	//calculate sec
	sec = input % 60;
	
	//printf
	printf("The time is %i : %i\n", min, sec);
	

	return 0;
}
