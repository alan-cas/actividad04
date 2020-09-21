#include <stdio.h>
void capturar_enteros(){
	float suma=0;
	int arreglo[5];
	for (int i=0; i<5; i++){
		printf("dame un entero: ");
		scanf("%i",arreglo[i]);
		suma+=arreglo[i];
	}
	for (int i=0; i<5; i++){
		printf("posicion [%i] %i: ",i,arreglo[i]);
		
	}
	printf("suma %f: ",suma);
	printf("promedio %f: ",suma/5);
}
int main() {
    char opc;
    
    do{
    	printf("1.- capturar 5 enteros");
    	printf("2.- leer 1 cadena e imprimirla n veces");
    	printf("3.- capturar personaje");
    	printf("4.- mostrar personaje");
    	printf("0.- salir");
    	scanf("%c",opc);
    	getchar();
    	
    	switch(opc){
    		case '1':
    			capturar_enteros();
    			break;
    		case '2':
    			break;
    		case '3':
    			break;
    		case '4':
    			break;
    		default :
    			break;
		}
	}while (opc!='0');
	
	
	

    return 0;
}
