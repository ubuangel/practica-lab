#include<iostream>
using namespace std;
#define t 100

void quicksort(int [t],int,int);
//void mostrararreglo(a[t],int);
int main(){
	int nro,a[t];
	cout<<" numero de elemtos del arreglo ";cin>>nro;
	cout<<"ingrese elemtos"<<endl;
	for (int i = 0; i < nro; i++) {
		cout<<"a["<<i<<"]";cin>>a[i];
	}

	quicksort(a ,0,nro-1);
//mostrararreglo(a,nro)
	cout<<" mostrando areglo "<<endl;
	for (int i = 0; i < nro; i++){
		cout<<"a["<<i<<"]";cout<<a[i];}

}
void quicksort(int a[t],int primero,int ultimo){
	int centro,i,j,pivot;
	centro=(primero+ultimo)/2;
	pivot=a[centro];
	i=primero;
	j=ultimo;
	do {
		while(a[i]<pivot)i++;
		while(a[j]>pivot)j--;
			if (i<=j) {
				int aux=a[i];
				a[i]=a[j];
				a[j]=aux;
				i++;
				j--;
			}

	} while (i<=j);
	if(primero<j)
		quicksort(a,primero,j);
	if (i<ultimo)
		quicksort(a,i,ultimo);

	}
