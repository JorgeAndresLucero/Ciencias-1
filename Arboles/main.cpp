#include <iostream>
#include <stdlib.h>
#include <math.h> /* run this program using the console pauser or add your own getch, system("pause") or input loop */
	using namespace std; 
	//void intercambiar( int p, int i, int a, );
	int main(int argc, char** argv) { 	
	int tam=0; 	
	int i=0; 	
	int aux=0; 	
	int padre=0; 	
	int prior=0; 	
	int opcion=0;
	int elimina=0;
	
//	do{ hacer que esto funcione bien bonito por fa
	cout<<"Bienvenido, por favor elija una opcion"<<endl;
	cout<<" 1. Insertar una cola de prioridad"<<endl;
	cout<<" 2. Eliminar una posicion"<<endl;
	cout<< "3. SALIR "<<endl;
	cin>>opcion;

   cout<<"Ingrese el tamanio de la cola"<<endl; 	
     cin>>tam; 	
		tam++; 	
		int arr[tam]; 	
		arr[0]=0; 	 
   switch(opcion){
		case 1 :{
		 	
		for(i=1; i<tam;i++){ 		
		cout<<"Ingrese el valor de prioridad "<<i<<endl; 		
		cin>>prior; 		
		arr[i]=prior; 		
		if(i != 1){ 	
		padre = i/2; 	
		if(arr[i] > arr[padre]){ 
		//intercambiar(padre,i,aux,arr);			//se realiza el intercambio 	
			aux=arr[i]; 	
			arr[i]= arr[padre]; 	
			arr[padre]= aux; 
		//for(i=1; i<tam; i++){
		if(arr[1] < arr[2] ){//verifico que la raiz sea la de mayor prioridad 
			aux = arr[1];//auxiliooo  :'v 
		    arr[1]= arr[2]; 
			arr[2] = aux;
		// }	
				
		}
		 		
			} 	
			 } 	else{ 		
			 	padre = (i+1)/2; 	
			 	} 	
			 	} 	 	
			 	//Imprime el arbol em orden de prioridad 
			 	cout<<"la cola de prioridad es:"<<endl; 	
			 	for(i=1; i<tam; i++){ 		 	
			 		cout<<" "<<arr[i]; 	
			 		cout<<" "; 	
			 		} 
          break;
      }
     
//-----------------------Elminar----------------------------------------------------------
case 2: {
	//aqui va la logica :P
	cout<<"Ingrese la prioridad que desea eliminar"<<endl;
	cin>>elimina;
	for(i=1; i<tam;i++){
	if(arr[i] == elimina){
		arr[i]= 0;
	}	
	}
	break;
}
	
	default:
	cout<<"Dato invalido!!! "<<endl;
	break;
}
//while(opcion != 3);arreglar esto 
	return 0;
}

/*
void intercambiar (int p,int i, int a){
            aux=arr[i]; 	
			arr[i]= arr[padre]; 	
			arr[padre]= aux; 		
}
*/
