#include <iostream>
#include <stdlib.h>
#include <iostream>
#include "Lists.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


/*
	1. Generar los resultados parcialmentepara poder acceder a ellos	
	2. Determinar la cantidad de votantes, ya sabemos que no toca clasificarlos por g�nero
	3. Como ya se tendr�an los datos de los Candidatos organizados, entonces ya se pueden generar los resultados
	4. Entonces mirar si manejar la misma estructura para las de alcald�a y presidenciales, porque los resultados los queremos observar por separado.
	5. De acuerdo con el art�culo 190 de la Constituci�n Pol�tica de Colombia el presidente de la rep�blica ser� elegido por la mitad m�s uno de los votos que depositen los ciudadanos.
*/
int main(int argc, char** argv) {
	
	//Lectura del archivo
	
	//ALCALDIAS
	//Reporte General
	int totalVotosDepto;
	int votosBlanco;
	int votosNulo;
	int votosAbstencion;
	
	//Reporte Detallado
	int alcaldesPartidoDepto;
	int hombres;
	int mujeres;
	
	//Reporte Total
	int alcaldesPartido;
	
	//PRESIDENTE 
	int pVotosDepto;
	int pBlancoDepto;
	int pNuloDepto;
	int pAbstencionDepto;
	
	//
	
	LinkedList <int> vCandidatos;
	
	int vCand1 = 10;
	int vCand2 = 3;
	
	vCandidatos.add_start(10);
	vCandidatos.add_end(30);
	vCandidatos.get(1);
	
	return 0;
}


