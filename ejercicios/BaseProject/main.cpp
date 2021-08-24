#include "mbed.h"
#define ON 1
#define OFF 0
#define MILISEG 200
DigitalOut LED(PC_13);
DigitalIn boton(PB_9);//Boton definido
Timer miTimer;
short Flanco;
int main(){
    Flanco=boton.read();
    while(1){
        if(Flanco==0){
            miTimer.start();
        }
        if((!boton.read())&& Flanco==1){



        }
        if((miTimer.read_ms())>=MILISEG){
            LED.write(ON);
            miTimer.stop();
        }
}