template <class T>

struct nodo{
	T clave;
	nodo *izq;
	nodo *der;
	
	int FactorB;
};

template <class T>
class AVL{
	
	int tam;
	int raiz;
	nodo<T> *aux;
	nodo<T> *aux_hijo;
	nodo<T> *aux_nieto;
	
	private:
		AVL(){
			tam = 0;
			raiz= 0;
			aux = 0;
			aux_hijo = 0;
			aux_nieto = 0;
		}
		
		/*
		if(aux<-1 && aux->izq=-1){
		}
		*/
		rotacion_sen_der(){
			
			aux_hijo -> der = aux;
			aux_hijo -> izq = aux_nieto;
		}
		  
		/*
		if(aux<-1 && aux->izq=-1){
		}
		*/
		rotacion_sen_izq(){
			aux_hijo ->izq = aux;
			aux_hijo ->der =aux_nieto;
		}
		
		rotacion_dob_der(){
			 
			
		}
		
		rotacion_dob_izq(){
			
			//Primera rotación
			aux -> der= aux_nieto;
			aux_nieto -> der = aux_hijo;
			//Segunda rotación
			aux_nieto -> der = aux_hijo;
			aux_nieto -> izq = aux;
		}
		
	public:
		//Métodos
		void insertar(int dato){
			nodo<T> *nodito;
			nodito = new nodo<T>;
			nodito -> clave = dato;
			nodito -> der = NULL;
			nodito -> izq = NULL; 
			//Insertar
			if(dato > nodito->clave){
				nodito -> der = nodito-> clave;
			}else{
				if(dato < nodito->clave){
					nodito -> izq = nodito -> clave;
				}
			}
			tam ++;
				
		}
		
	/*	bool borrar_nodo(int dato){
			
		}*/
		
		
		get_raiz(){
			return raiz;
		}
	
};
