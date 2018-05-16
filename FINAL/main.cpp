#include <iostream>
#include <stdlib.h>
#include <iostream>
#include "Lists.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


/*
	1. Generar los resultados parcialmentepara poder acceder a ellos	
	2. Determinar la cantidad de votantes, ya sabemos que no toca clasificarlos por género
	3. Como ya se tendrían los datos de los Candidatos organizados, entonces ya se pueden generar los resultados
	4. Entonces mirar si manejar la misma estructura para las de alcaldía y presidenciales, porque los resultados los queremos observar por separado.
*/
int main(int argc, char** argv) {
	
	LinkedList <int> vCandidatos;
	
	int vCand1 = 10;
	int vCand2 = 3;
	
	vCandidatos.add_start(10);
	vCandidatos.add_end(30);
	vCandidatos.get(1);
	
	return 0;
}


