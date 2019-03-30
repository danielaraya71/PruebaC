/* 
 * File:   main.c
 * Author: danie
 *
 * Created on March 30, 2019, 2:53 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
// Función que compara dos cadenas
int strcmp(char *s,char *t){
	//Se contabiliza la suma de los valores ASCII en dos contadores
	int contadorS=0,contadorT=0;
	//Se recorren ambas palabras por separado y se suman los valores ASCII de sus caracteres
	while(*s){
		contadorS+=*s;
		s++;
	}
	while(*t){
		contadorT+=*t;
		t++;
	}
	//Se realiza la comparación de los contadores para determinar el resultado
	if(contadorS>contadorT){
		printf("El resultado de strcmp es %d\n",1);
	}
	if(contadorS<contadorT){
		printf("El resultado de strcmp es %d\n",-1);
	}
	if(contadorS==contadorT){
		printf("El resultado de strcmp es %d\n",0);
	}

	return 0;
}

//Función que concatena dos cadenas
void strcat(char *dest,char *src){
	//Se determinar el largo de la primera palabra para usarlo como referencia más adelante
	int len=strlen(dest),i=0;
	//Se recorre la segunda palabra y se concatena caractér por caractér al final de la primera palabra, por esto se necesitaba el largo de la primera palabra
	while(*src){
		dest[len+i]=*src;
		i++;
		src++;
	}
	printf("El string resultante de strcat es %s\n",dest);
}


int main(){
	char s[50];
	char t[50];
	printf("Ingrese dos palabras\n");
	scanf("%s %s",&s,&t);
	strcmp(s,t);
	strcat(s,t);
}

    return (EXIT_SUCCESS);
}

