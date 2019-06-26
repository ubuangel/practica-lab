/*
 * A data structure for storing a sequence of elements.
 * Thanks go to:
 * - https://visualgo.net/en
 * - Linked Lista (CS106B - Programming abstractions in C++ : https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1194/lectures/16/Slides16.pdf)
 * - Chapter 20: Containers and Iterators (Programming, Principles and Practice using C++ by Bjarne Stroustrup)
 */

#include <iostream>
template <typename T> class ListaaEnlazada;

template <typename T>
	class Nodo {//decalramos la clase nodo
	 private:
	  friend class ListaaEnlazada<T>;
	  /* Node */
	  T data;
	  Nodo<T>* siguinete; //puntero siguiente Nodo 

	 public:
	  T getData() { return data; }
};



template <typename T>
	class ListaaEnlazada {
	 private:
	  Nodo<T>* head;
	  Nodo<T>* tail;
	  int n; // to keep number of Nodos created.

	 public:
	  class iterator;
	  iterator begin(); // iterator to first element.
	  iterator end();   // iterator to one beyond last element.
	  ListaaEnlazada() : head(nullptr), tail(nullptr), n(0) {}

	  ~ListaaEnlazada() {
		while (head != nullptr) {
		  Nodo<T>* ptr = head->siguinete;
		  delete head;
		  head = ptr;
								}
	  	  }

  Nodo<T>* get(int i);        // returns Nodo at a valid index (0 ... N-1).
  void insertar(T const& data); // prepend a new Nodo into the front of the Lista.
  void insertar(int i, T const& data); // insertar Nodo in between [1,N-1].
  void insertarTail(T const& data);    // insertar Nodo at the end of the Lista.
  void borrar();                      // remove first Nodo of the Lista.
  void borrar(int i);                 // remove Nodo in between [1, N-2].
  void borrarTail();                  // remove the last Nodo of the Lista.
  int size() {       return n;}                // returns numbers of Nodos in the Lista.

	};


template <typename T>
class ListaaEnlazada<T>::iterator {//calse del iterador
 private:
	  Nodo<T>* curr;

	 public:
	  iterator(Nodo<T>* ptr) : curr(ptr) {}
	  iterator& operator++() {
		curr = curr->siguinete;
		return *this;
		  }
	  T& operator*() { return curr->data; }
	  bool operator==(iterator const& b) const { return curr == b.curr; }
	  bool operator!=(iterator const& b) const { return curr != b.curr; }
};

template <typename T>
	typename ListaaEnlazada<T>::iterator ListaaEnlazada<T>::begin() {
	  iterator it(head);
	  return it;
}

template <typename T>
	typename ListaaEnlazada<T>::iterator ListaaEnlazada<T>::end() {
	  iterator it(tail);
	  return ++it;
}

template <typename T>
	Nodo<T>* ListaaEnlazada<T>::get(int i) {
	  Nodo<T>* ptr = head;
	  for (int x = 0; x < i; ++x)
		ptr = ptr->siguinete;
	  return ptr;
}

template <typename T>
	void ListaaEnlazada<T>::insertar(T const& data) {
	  Nodo<T>* newNodo = new Nodo<T>();
	  newNodo->data = data;
	  newNodo->siguinete = head;
	  head = newNodo;
	  if (head->siguinete == nullptr)
		tail = head;
	  ++n;
}

template <typename T>
	void ListaaEnlazada<T>::insertar(int i, T const& data) {
	  if (i < 0 || i > size())
		return;

	  if (i == 0) {
		insertar(data);
		return;
  }
	  if (i == size()) {
		insertarTail(data);
		return;
  }
	  Nodo<T>* pre = get(i - 1);
	  Nodo<T>* aft = pre->siguinete;
	  Nodo<T>* newNodo = new Nodo<T>();
	  newNodo->data = data;
	  newNodo->siguinete = aft;
	  pre->siguinete = newNodo;
	  ++n;
}

template <typename T>
	void ListaaEnlazada<T>::insertarTail(T const& data) {
	  if (tail == nullptr) {
		insertar(data);
		return;
	  }
	  Nodo<T>* newNodo = new Nodo<T>();
	  newNodo->data = data;
	  tail->siguinete = newNodo;
	  tail = newNodo;
	  ++n;
	}

template <typename T>
	void ListaaEnlazada<T>::borrar() {
	  if (head == nullptr)
		return;
	  Nodo<T>* ptr = head;
	  head = head->siguinete;
	  delete ptr;
	  --n;
}

template <typename T>
	void ListaaEnlazada<T>::borrar(int i) {
	  if (i < 0 || i > size() - 1)
		return;

	  if (i == 0) {
		borrar();
		return;
	  }
	  if (i == size()) {
		borrarTail();
		return;
	  }
	  Nodo<T>* pre = get(i - 1);
	  Nodo<T>* del = pre->siguinete;
	  Nodo<T>* aft = del->siguinete;
	  pre->siguinete = aft;
	  delete del;
	  --n;
	}

template <typename T>
void ListaaEnlazada<T>::borrarTail() {
	  Nodo<T>* pre = head;
	  Nodo<T>* temp = head->siguinete;
	  while (temp->siguinete != nullptr) {
		pre = pre->siguinete;
		temp = temp->siguinete;
	  }
	  pre->siguinete = nullptr;
	  delete temp;
	  tail = pre;
	  --n;
	}


/* Look for a value */
int buscar(ListaaEnlazada<int>& ll, int data) {
  int i = 0;
  for (ListaaEnlazada<int>::iterator it = ll.begin(); it != ll.end(); ++it) {
    if (*it == data)
      break;
    ++i;
  }
  if (i == ll.size())
    return -1;
  else
    return i;
}

/* Prints the contents of a linked Lista */
void print(ListaaEnlazada<int>& ll) {
  for (ListaaEnlazada<int>::iterator it = ll.begin(); it != ll.end(); ++it) {
    std::cout << *it<<" ---o";
  }
  std::cout<<'\n';
}


int main() {
	  ListaaEnlazada<int> Lista;
	  int data;
	  int idx;
	  // insertar
	  Lista.insertar(7);
	  Lista.insertar(3);
	  Lista.insertar(1, 5);
	  Lista.insertar(3, 9);
	  Lista.insertarTail(11);
	  print(Lista);
	  // buscar
	  std::cout << "buscar dato en la Lista enlazada para:\n";
//	  std::cout << "buscar dato: ";
	  std::cin >> data;
	  idx = buscar(Lista, data);
	  if (idx != -1) {
		std::cout << "Valor : " << data << " esta en elindice (" << idx << ")\n";
	  } else {
		std::cout << "No encontrado.\n";
	  }
	  // remove
	  std::cout << "Eliminar nodo en el indice: ";
	  std::cin >> idx;
	  Lista.borrar(idx);
	  print(Lista);
	  return 0;
}

