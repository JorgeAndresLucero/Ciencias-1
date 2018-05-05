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
int prior; 	
cout<<"Ingrese el tamanio de la cola"<<endl; 	
cin>>tam; 	
tam++; 	
int arr[tam]; 	
arr[0]=0; 	 	 	
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
			 		return 0;
}
/*
void intercambiar (int p,int i, int a){
            aux=arr[i]; 	
			arr[i]= arr[padre]; 	
			arr[padre]= aux; 		
}
*/
