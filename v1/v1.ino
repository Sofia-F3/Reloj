/*
	Capitulo 49 de Arduino desde cero en Español.
	Programa que muestra en un display de 7 segmentos y cuatro digitos mediante
	el MAX7219, la cantidad de segundos transcurridos desde iniciado el programa
	a modo de ejemplo para verificar que todo se encuentra conectado correctamente
	Requiere instalar libreria LedControl

	Autor: bitwiseAr  

*/

#include "LedControl.h"			// incluye libreria LedControl


LedControl lc = LedControl(11, 13, 10, 1);	// crea objeto

int segundos;				// variable para almacenar cantidad de segundos

void setup() {
  lc.shutdown(0, false);		// inicia el MAX7219
  lc.setIntensity(0, 4);		// establece nivel de brillo en 4
  lc.clearDisplay(0);	 		// borra displays
}

void loop() { 
  lc.setDigit(0, 0, 2, false);	  // en digito 0 aplica modulo 10
}