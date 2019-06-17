#include <iostream>

#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;



template <class T>

class Nodo
{
    public:
        Nodo();
        Nodo(T);
        ~Nodo();

        Nodo *siguiente;
        T dato;

        void delementote_all();
        void imprimir();
};


template <class T>

class Lista
{
    public:
        Lista();
        ~Lista();

        void agregar_cabeza(T);
        void add_final(T);
        void add_ordenadamente(T);

        void del_by_position(int );

        void encontrar_por_usuario(int);
        void fill_random(int);

        void invertir();
        void imprimir();
        void buscar(T);
        void ordenar();

    private:
        Nodo<T> *m_cabeza;
        int m_num_Nodos;
};




// Constructor por defecto
template<typename T>

Nodo<T>::Nodo()
{
    dato = NULL;
    siguiente = NULL;
}

// Constructor por parámetro
template<typename T>
Nodo<T>::Nodo(T dato_)
{
    dato = dato_;
    siguiente = NULL;
}



// Eliminar todos los Nodos
template<typename T>
void Nodo<T>::delementote_all()
{
    if (siguiente)
        siguiente->delementote_all();
    delete this;
}

// Imprimir un Nodo
template<typename T>
void Nodo<T>::imprimir()
{
    //cout << "Nodo-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << siguiente << endl;
    cout << dato << "--- ";
}

template<typename T>
Nodo<T>::~Nodo() {}


// Constructor por defecto
template<typename T>
Lista<T>::Lista()
{
    m_num_Nodos = 0;
    m_cabeza = NULL;
}

// Insertar al inicio
template<typename T>
void Lista<T>::agregar_cabeza(T dato_)
{
    Nodo<T> *new_Nodo = new Nodo<T> (dato_);
    Nodo<T> *temp = m_cabeza;

    if (!m_cabeza) {
        m_cabeza = new_Nodo;
    } else {
        new_Nodo->siguiente = m_cabeza;
        m_cabeza = new_Nodo;

        while (temp) {
            temp = temp->siguiente;
        }
    }
    m_num_Nodos++;
}

// Insertar al final
template<typename T>
void Lista<T>::add_final(T dato_)
{
    Nodo<T> *new_Nodo = new Nodo<T> (dato_);
    Nodo<T> *temp = m_cabeza;

    if (!m_cabeza) {
        m_cabeza = new_Nodo;
    } else {
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = new_Nodo;
    }
    m_num_Nodos++;
}

// Insertar de manera ordenada

template<typename T>
void Lista<T>::add_ordenadamente(T dato_)
{
    Nodo<T> *new_Nodo = new Nodo<T> (dato_);
    Nodo<T> *temp = m_cabeza;

    if (!m_cabeza) {
        m_cabeza = new_Nodo;
    } else {
        if (m_cabeza->dato > dato_) {
            new_Nodo->siguiente = m_cabeza;
            m_cabeza = new_Nodo;
        } else {
            while ((temp->siguiente != NULL) && (temp->siguiente->dato < dato_)) {
                temp = temp->siguiente;
            }
            new_Nodo->siguiente = temp->siguiente;
            temp->siguiente = new_Nodo;
        }
    }
    m_num_Nodos++;
}

template<typename T>
void Lista<T>::del_by_position(int pos)
{
    Nodo<T> *temp = m_cabeza;
    Nodo<T> *temp1 = temp->siguiente;

    if (pos < 1 || pos > m_num_Nodos) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_cabeza = temp->siguiente;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Nodo<T> *aux_node = temp1;
                temp->siguiente = temp1->siguiente;
                delete aux_node;
                m_num_Nodos--;
            }
            temp = temp->siguiente;
            temp1 = temp1->siguiente;
        }
    }
}



// Llenar la Listaa por teclado
template<typename T>
void Lista<T>::encontrar_por_usuario(int dim)
{
    T elemento;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elementomento " << i + 1 << endl;
        cin >> elemento;
        add_final(elemento);
    }
}

template<typename T>

void Lista<T>::fill_random(int dim)
{
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        add_final(rand() % 100);
    }
}

// Usado por el método intersección
template<typename T>
void insert_ordenar(T a[], int size)
{
    T temp;
    for (int i = 0; i < size; i++) {
        for (int j = i-1; j>= 0 && a[j+1] < a[j]; j--) {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}

// Números que coinciden en 2 Listas


// invertirir la Listaa
template<typename T>
void Lista<T>::invertir()
{
    Nodo<T> *prev = NULL;
    Nodo<T> *siguiente = NULL;
    Nodo<T> *temp = m_cabeza;

    while (temp) {
        siguiente = temp->siguiente;
        temp->siguiente = prev;
        prev = temp;
        temp = siguiente;
    }
    m_cabeza = prev;
}

// Imprimir la Listaa
template<typename T>
void Lista<T>::imprimir()
{
    Nodo<T> *temp = m_cabeza;
    if (!m_cabeza) {
        cout << "La Listaa está vacía " << endl;
    } else {
        while (temp) {
            temp->imprimir();
            if (!temp->siguiente) cout << "NULLL";
                temp = temp->siguiente;
        }
  }
  cout << endl << endl;
}


// Buscar el dato de un nodo
template<typename T>
void Lista<T>::buscar(T dato_)
{
    Nodo<T> *temp = m_cabeza;
    int cont = 1;
    int cont2 = 0;

    while (temp) {
        if (temp->dato == dato_) {
            cout << "El dato se encuentra en la posición: " << cont << endl;
            cont2++;
        }
        temp = temp->siguiente;
        cont++;
    }

    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;
}


// Ordenar de manera ascendente
template<typename T>
void Lista<T>::ordenar()
{
    T temp_dato;
    Nodo<T> *aux_Nodo = m_cabeza;
    Nodo<T> *temp = aux_Nodo;

    while (aux_Nodo) {
        temp = aux_Nodo;

        while (temp->siguiente) {
            temp = temp->siguiente;

            if (aux_Nodo->dato > temp->dato) {
                temp_dato = aux_Nodo->dato;
                aux_Nodo->dato = temp->dato;
                temp->dato = temp_dato;
            }
        }

        aux_Nodo = aux_Nodo->siguiente;
    }
}


template<typename T>
Lista<T>::~Lista() {}


int main()
{
    Lista<int> Lista_1;
    Lista<int> Lista_2;
    int elemento;

    int dim=5;
    int pos;


    cout << "dimensión de la Listaa 5: " << endl;
//    cin >> dim;

//    Lista_1.fill_random(dim);


    cout << "Agrega un elementomento por la cabeza: " ;
    cin >> elemento;
    Lista_1.agregar_cabeza(elemento);

    cout << "Agrega un elementomento por la cabeza: " ;
        cin >> elemento;
    Lista_1.agregar_cabeza(elemento);

    cout << "Agrega un elementomento por la cabeza: " ;
        cin >> elemento;
    Lista_1.agregar_cabeza(elemento);

    cout << "Agrega un elementomento por la cabeza: " ;
        cin >> elemento;
    Lista_1.agregar_cabeza(elemento);

    cout << "Agrega un elementomento por la cabeza: " ;
        cin >> elemento;
    Lista_1.agregar_cabeza(elemento);


    cout << "Listaa A al inicio " ;
    Lista_1.imprimir();

    cout << "Listaa invertirida: " ;
    Lista_1.invertir();
    Lista_1.imprimir();

    cout << "Listaa ordenada: " ;
    Lista_1.ordenar();
    Lista_1.imprimir();

    cout << "Agrega un elementomento. Será insertado ordenadamente: " ;
    cin >> elemento;
    Lista_1.add_ordenadamente(elemento);
    Lista_1.imprimir();

    cout << "Busca un elementomento: " ;
    cin >> elemento;
    Lista_1.buscar(elemento);
    cout<<"eliminar segun usuario\n";
    cin>>pos;
    Lista_1.del_by_position(pos);

    Lista_1.imprimir();

    return 0;
}
