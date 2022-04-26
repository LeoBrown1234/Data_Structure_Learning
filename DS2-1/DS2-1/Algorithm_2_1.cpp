#include<stdio.h>
#include<stdlib.h>
#include "Algorithm_2_1.h"
#define MAX_INT 32767
#define MIN_INT -32768

void Hello_View() {
	int Choice;
	printf("Choice a number you like:\n");

	while (1) {
		scanf("%d", &Choice);

		if (Choice > 32767 || Choice < -32768) {
			printf("The number must be needed between -32768 ~ 32767!!!\n\n");
			printf("Please type a number again!!!\n\n");
			printf("Choice a number you like:\n\n");
			continue;
		}
		else if (Choice <= 0) {
			printf("Go to the basement.\n");
			break;
		}
		else {
			printf("Go upstairs.\n");
			break;
		}




		
	}



	
}





