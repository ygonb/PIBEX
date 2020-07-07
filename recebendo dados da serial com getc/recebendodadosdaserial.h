#include <12F675.h>
#device ADC=16

#FUSES NOWDT                 	//No Watch Dog Timer
#FUSES NOMCLR                	//Master Clear pin used for I/O
#FUSES NOBROWNOUT            	//No brownout reset

#use delay(internal=4MHz)
#use rs232(baud=9600,parity=N,xmit=PIN_A0,rcv=PIN_A2,bits=8,stream=PORT1)

