#include <stdio.h>
#include <wiringPi.h>

#define LED1	24
#define LED2	22
#define SW1	4
#define SW2	17

int main(void){
	printf("Prova 1: Semplice LED blinking mediante pulsante SW1 su GPIO4 (wiringPiSetupGpio)\n");
        printf("\tGli OUTPUT dei due LED sono GPIO22 e GPIO24, mediante la pressione del pulsante i due LED eseguono un lampeggio alternato\n\n");

	wiringPiSetupGpio();

        printf("wiringPiSetupGpio()\n");

        pinMode(LED1, OUTPUT);
        pinMode(LED2, OUTPUT);
        pinMode(SW1, INPUT);

	printf("Fine Setup\n");

        while(1){
                digitalWrite(LED1, 0);
                digitalWrite(LED2, 0);

		if(digitalRead(SW1)!=1){
			printf("SW1 Press\n");
                	digitalWrite(LED1, 1);
                	digitalWrite(LED2, 0);
                	delay(250);
                	digitalWrite(LED1, 0);
                	digitalWrite(LED2, 1);
                	delay(250);
		}
	}
}

