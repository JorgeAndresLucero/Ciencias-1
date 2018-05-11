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
	nodo<T> *raiz;
	
	public:
		//Constructor
		AVL(){
			
			raiz = NULL;
			tam = 0;
		};
		
		//Métodos
		void insertar(int dato){
			nodo<T> *nodito;
			nodito = new nodo<T>;
			nodito -> clave = dato;
			nodito -> der = NULL;
			nodito -> izq = NULL; 
			//Insertar
			if(dato > nodito->clave){
				nodito -> der = nodito->clave;
			}else{
				if(dato < nodito->clave){
					nodito -> izq = nodito -> clave;
				}
			}
			tam ++;
				
		}
		
		bool borrar_nodo(int dato);
		
		/*
		if(aux<-1 && aux->izq=-1){
		}
		*/
		rotacion_sen_der(){
			
		}
		
		rotacion_sen_izq(){
		
		}
		
		get_raiz(){
			return raiz;
		}
	
};
