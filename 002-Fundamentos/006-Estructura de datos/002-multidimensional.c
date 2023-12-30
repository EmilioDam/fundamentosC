#include <stdio.h>


int main(int argc, char *argv[]){
	
	char* agenda[10][4];
	
	agenda[0][0] = "Emilio";
	agenda[0][1] = "Cifuentes Lloret";
	agenda[0][2] = "123456";
	agenda[0][3] = "info@emilio.com";
	
	agenda[1][0] = "Juan";
	agenda[1][1] = "Lopez Garcia";
	agenda[1][2] = "8456842";
	agenda[1][3] = "info@juan.com";
	
	printf("El correo del segundo registro de la agenda es: %s \n ",agenda[1][3]);
	
	return 0;
}
