#INDEF PERSONAJE_H
#DEFINE PERSONAJE_H
struct personaje{
	char nombre[20];
	char tipo[20];
	int fuerza;
	float salud;
}p[5];
int cont=0;
void capturar_personaje(){
	if(cont<5){
		printf("nombre: ");
		scanf("%s",p[cont].nombre);
		printf("tipo: ");
		scanf("%s",p[cont].tipo);
		printf("fuerza: ");
		scanf("%i",&p[cont].fuerza);
		printf("salud: ");
		scanf("%f",&p[cont].salud);
		cont++;
	}else{
		printf("el arreglo de personajes esta lleno\n");
		
	}
	
	
}
void mostrar_personajes(){
	for(int i=0;i<cont;i++){
		printf("nombre: %s\n",p[i].nombre);
		printf("tipo: %s\n",p[i].tipo);
		printf("fuerza: %i\n",p[i].fuerza);
		printf("salud: %f\n",p[i].salud);
	}
}
#ENDIF 
