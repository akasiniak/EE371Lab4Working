#include <stdio.h>
#include "sys/alt_stdio.h"
#define characterSent (char *) 0x00041060
#define characterReceived (char *) 0x00041070
#define load (char *) 0x00041080
#define transmitEnable (char *) 0x00041090
#define parallelInput (char *) 0x000410a0
#define parallelOutput (char *) 0x000410b0
#define ramControls (char *) 0x00041050
#define dataIn (char *) 0x00041040
#define dataOut (char *) 0x00041030
#define address (char *) 0x00041020

int main(){
		volatile int i;
		*address = 0;
		*ramControls = 7;
	while(1){
		*transmitEnable = 1;
		*parallelOutput = alt_getchar();
		*load = 1;
		printf("parallelOutput: %d\n", *parallelOutput);
		printf("characterSent: %d\n", *characterSent);
		printf("characterReceived: %d\n", *characterReceived);
		printf("load: %d\n", *load);
		printf("transmitEnable: %d\n", *transmitEnable);
		*load = 0;
		printf("\n");
		printf("characterSent: %d\n", *characterSent);
		while(!*characterSent){
			continue;
		}
		while ((alt_getchar()) != '\n');
		*transmitEnable = 0;
		printf("characterSent: %d\n", *characterSent);
		printf("characterReceived: %d\n", *characterReceived);
		printf("\n");
		while(!*characterReceived){
			continue;
		}
		printf("characterReceived: %d\n", *characterReceived);
		printf("parallelInput: %c\n", (char)*parallelInput);
		printf("\n");
		*dataOut = *parallelInput;
		*ramControls = 4;
		for(i = 0; i < 100000; i++){}
		*ramControls = 2;
		for(i = 0; i < 100000; i++){}
		printf("from SRAM: %c\n", (char)*dataIn);
	}
}
