#include <12F675.h>
#device ADC=16

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES MCLR                   //Master Clear - ativado
#FUSES NOBROWNOUT               //No brownout reset
#FUSES INTRC_IO         // Oscilador interno com pinos de IO disponíveis

#use delay(internal=4MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_A0,rcv=PIN_A2,bits=8,stream=PORT1)

