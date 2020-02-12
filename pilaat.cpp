/*
 * ats.cpp
 *
 *  Created on: 12 feb. 2020
 *      Author: angel
 */



#include<iostream>
#include<vector>
using namespace std;


struct nodo {
	nodo *siguiente;
	int dato;

};

void agregar(nodo *&pila,int d) {
	nodo *aux = new nodo;
	aux->dato = d;
	aux->siguiente = pila; //enlaza el nuevo nodo a la lista

	pila= aux;
//cout<<"elemento "<<d<<"agregado";

}
void pop(nodo *&pila) {

	int r;
	if (pila== NULL) {
		cout << "no se puede sacar de una pila vacia";
	}
	nodo *aux = pila;

	pila= aux->siguiente;

	r = aux->dato;
	delete aux;
	cout << "salio:"<<r<<"-";

}

void sacartodo(nodo *&pila){
	nodo *aux=pila;
	if (aux==NULL) {
		cout<<"pila vacia"<<endl;

	}else{
		while (aux!= NULL) {

			pop(aux);
		}
	}


	}


void mostrar(nodo *&pila) {

nodo *aux=pila;
if (aux==NULL) {
	cout<<"pila vacia"<<endl;

}else{
	while (aux!= NULL) {

		cout << aux->dato << "-";
		aux= aux->siguiente;
	}
}

}
int main() {

	nodo *pila=NULL;
	int n1;
	int n2;
//
//	while(cabeza_ptr!=NULL){
//		cout<<siguiente->dato<<endl;}

	agregar(pila,1);
//mostrar();
	agregar(pila,2);
	agregar(pila,3);

//mostrar();
	agregar(pila,4);
	pop(pila);
	mostrar(pila);
	cout<<endl;
	sacartodo(pila);


}
