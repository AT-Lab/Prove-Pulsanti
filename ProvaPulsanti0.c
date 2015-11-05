#include <stdio.h>
#include <wiringPi.h>

#define LED1	5
#define LED2	3
#define SW1	7
#define SW2	0

int main(void){
	printf("Prova 0: Verifica stato dei pulsanti SW1 - SW2 settati sulle GPIO7 e GPIO0 (wiringPiSetup)\n");
	printf("\tOgni mezzo secondo viene letto lo stato dei pulsanti mediante il comando digitalRead()\n\te poi mostrato a schermo.\n\n");

	wiringPiSetup();

        pinMode(SW1, INPUT);
        pinMode(SW2, INPUT);

        printf("Fine Setup\n");

	int sw1;
	int sw2;

        while(1){
                sw1=digitalRead(SW1);
		sw2=digitalRead(SW2);
                printf("SW1: %d   SW2: %d\n", sw1, sw2);
		delay(500);
	}
}
