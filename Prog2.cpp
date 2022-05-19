/*Autor: Ricardo Jafet Granados Chable, Realizado: 03/02/2022
	Segundo programa en C: Datos de un triangulo y calculo de su area
	*/

#include<stdio.h>

int main() {
	// Declaracion de variables 
	int base, altura;
	float area;
	// Entrada de datos
	printf("Calcular el area del triangulo\n");
	printf("Base del triangulo: ");
	scanf("%d",&base);
	printf("Altura del triangulo: ");
	scanf("%d",&altura);
	// Proceso
	area = (float)base*altura/2;
	// Salida
	printf("El area del triangulo es: %f",area);
	return 0;
}

