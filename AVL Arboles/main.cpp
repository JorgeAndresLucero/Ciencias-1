#include <iostream>
#include <stdio.h>
#include "AVL.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	
	
	int opcion;
	AVL<int> arbolAVL; 

	do{
		cout<<"Por favor seleccione una opcion"<<endl;
		cout<<"1. Insertar un nodo"<<endl;
		cout<<"2. Eliminar un nodo"<<endl;
		cout<<"3. Obtener la raiz" <<endl;
		cout<<"4. Salir"<<endl;
		
		cout<<"\nOPCION: ";
		cin>>opcion;
		
		
		switch(opcion){
			
			case 1:
				cout<< "Inserte el nuevo nodo"<<endl;
				arbolAVL.insertar(10);
				break;
				
				case 2:
					cout<<"Ingrese el nodo a eliminar"<<endl;
					break;
					
					case 3:
						cout<< "El nodo raiz es : "<<endl;
						break;
						
						default:
							cout<<"Opcion Incorrecta"<<endl;
		}
		
	}while(opcion != 4);
	
	
	return 0;
}
