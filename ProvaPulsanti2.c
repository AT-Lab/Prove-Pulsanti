#include <stdio.h>
#include <wiringPi.h>
#include <softPwm.h>

#define LED1	22
#define SW1	4
#define SW2	17

int main(){
        printf("Prova 2: Collaudo delle funzioni PWM della porta GPIO22 settata come OUTPUT (wiringPiGpio)\n");
        printf("\tMediante la pressione del pulsante SW1 si incrementa la luminosità del LED modificando il Duty Cycle presente sull'uscita\n");

        wiringPiSetupGpio();
        softPwmCreate(LED1, 0, 100);

	printf("Fine setup\n");

	int i = 0;

	while(1){
		if(!digitalRead(SW1) && i<100){
			i++;
			softPwmWrite(LED1, i);
                	printf("dc: %2.2d %%\n", i);
                	delay(20);
		}
		if(!digitalRead(SW2) && i>0){
			i--;
			softPwmWrite(LED1, i);
                	printf("dc: %2.2d %%\n", i);
                	delay(20);
		}
	}
}
