#include <recebendodadosdaserial.h>
int caracter;

void main()
{
   
   while(TRUE)
   {
      if (!input(pin_a2)){ 
                   delay_us(150);
                   output_high(pin_a4);
                   if (input(pin_a2)){caracter=1;}
                   else{caracter=0;}
                   delay_us(91);
                   output_low(pin_a4);
                   if (input(pin_a2)){caracter=caracter+2;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_high(pin_a4);
                   if (input(pin_a2)){caracter=caracter+4;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_low(pin_a4);
                   if (input(pin_a2)){caracter=caracter+8;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_high(pin_a4);
                   if (input(pin_a2)){caracter=caracter+16;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_low(pin_a4);
                   if (input(pin_a2)){caracter=caracter+32;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_high(pin_a4);
                   if (input(pin_a2)){caracter=caracter+64;}
                   else{caracter=caracter;}
                   delay_us(91);
                   output_low(pin_a4);
                   if (input(pin_a2)){caracter=caracter+128;}
                   else{caracter=caracter;}
                   
                   printf("%c",caracter);
                   
                    } ;
   }

}
