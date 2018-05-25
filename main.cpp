/*
VERSION 001 FUNCION 

JORGE LUCERO 
JULIANA CAPADOR
*/

#include <iostream>
#include <stdlib.h>
#include <ctime>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//int makecenso(int votantes);
using namespace std;

int n=0;
int votantes=0;



int main() {
	
	srand((unsigned)time(0));//controla que no se guarde los randoms
	int n = 9999999;
	int votantes = 0;
	int suma = 0;
	int ciudades[5];	
	//suponiendo que las ciudaddes correspiknden a cada posicion del arreglo 

	for(int i = 0; i <= 5 ; i++){
		votantes=0;
	    votantes = rand() % (n+1);//cada iteracion del for llena la cantidad de votantes habilitados por ciudad 
		ciudades[i] = votantes;
		suma = suma+votantes;
	}
	
	
	for(int i = 0; i <= 5 ; i++){
		cout<<" "<<ciudades[i]<<endl;
	}
	cout<<endl;
	
	cout<<"LA CANTIDAD DE VOTANTES HABILITADOS:  "<<suma;
	
	
	return 0;
}

