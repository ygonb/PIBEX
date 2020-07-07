#include <recebendodadosdaserial.h>
char caracter;

void main()
{

   while(TRUE)
   {
      if (kbhit()){ //é verdadeiro se tem alguma inf na porta serial
                   caracter=getc();//pega o caractere da serial  
                    if (caracter=="a"){ output_high(pin_a4);}
                    if (caracter=="b"){output_low(pin_a4);}
                   }     
   }

}
