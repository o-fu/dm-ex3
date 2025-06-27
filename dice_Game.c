ｋｋｋｋｋｋｋｋｋｋｋｋｋｋ

なまえを聞く編集

/*
	Dice game 
	2025-6
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int die_1, die_2;

	srand((unsigned int)time(NULL));


	printf("Rolling dice...\n");
	
	die_1 = rand() % 6 + 1;
	printf("Die 1: %d\n", die_1);
	
	die_2 = rand() % 6 + 1;
	printf("Die 2: %d\n", die_2);

	printf("Total Value: %d\n", die_1 + die_2);

  return 0;
}
