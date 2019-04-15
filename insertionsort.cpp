#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, llave, j;
    for (i = 1; i < n; i++) {
        llave = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > llave) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = llave;
    }
}

void mostrararray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout<< " "<< arr[i];
    cout<<"\n";
}

int main()
{
	int n,a[20];
	cout<<" ingrese el tamaño del arreglo "<<endl;
	cin>>n;
	for (int t = 0; t < n; t++) {
		cout<<"ingrese el valor el la posiscion "<<t+1<<"del arreglo  ";cin>>a[t];
	}


    insertionSort(a, n);
    mostrararray(a, n);

    return 0;
}
