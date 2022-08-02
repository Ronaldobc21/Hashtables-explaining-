#include <stdio.h>

typedef struct nodo{ //Aqui declaro mi nodo

    char *word;
    struct nodo *next; //Puede ser cualquier palabra
}
nodo;

//siempre un hashtable va compartido de un nodo y es arreglo de nodos
// siempre es mejor tenerlo por medio de funciones... para lo de los nodos
nodo *hashtable[26]; // voy a obtener indices elementos de 0 a 25

unsigned int hash(const char *word);
bool check(const char *word); // siempre declarar las fuciones

bool insertar(const char *word);
void recorrer();
int main(void){

// const es una variable no modificable del codigo.
// const int numero = 500; nunca va cambiar su valor a lo largo del codigo.



}

// entrada, proceso y salida
// la entrada del hash es la palabra y el proceso es el rango a calcular y el la salida es lo que se va
// a retornar esta es la salida... "return"
//las funciones se realizan respecto a lo  que se va a realizar.


unsigned int hash(const char *word){ // Este es la salida, obtiene un indice de una palabra, manipular
int variable =(toupper(word[0]) - 'A') % 26; // todo  lo convierte en mayuscula  y hace el calculo en mayuscula


return variable;
}



bool check(const char *word){ // verifica si word está en la hash table



}



bool insertar(const char *word){
    // Crear nodo
    nodo *nuevo_nodo = malloc(sizeof(nodo)); // reservar lo que me gasta un nodo, es por eso que se crea
// el malloc junto con el sizeof
    // siempre, siempre tengo que verificar si se reservo memoria

    if(!nuevo_nodo){
        return false;
    }
// -> es para acceder a los datos

    nuevo_nodo -> word = word; // parametro de la linea 51 lo que yo recibo como parametro lo meto en el nodo
    nuevo_nodo -> next = NULL; // ya el nuevo esta inicializado por lo tanto no va apuntar  a nada.
    // nuevo_nodo aqui ya lo estamos utilizando  en word  y por lo tanto se pone NULL

    int indice = hash(word); // estamos obteniendo el indice de la palabra
    if(hashtable[indice]){ // aqui verificando si hay un elemento en ese indice o si esta insertado
    nuevo_nodo -> next = hashtable[indice]; //cambiar de valor
    hashtable[indice] = nuevo_nodo; // va iniciar , nada mas si hay alguien, apunta a este.. y vos vas a iniciar.
    return true;

    }
    else{// si no hay nadie
    hashtable[indice] = nuevo_nodo; // vos vas a iniciar

    return true; // caso si es se pudo insertar // true o false se pudo o no se pudo insertar.
    }

}


void recorrer(){




}