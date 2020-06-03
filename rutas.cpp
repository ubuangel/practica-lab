/*
 * rutas.cpp
 *
 *  Created on: 1 jun. 2020
 *      Author: angel
 */

#include<iostream>
#include<string.h>
#include<cmath>
#include<climits>
using namespace std;
int almacen[9];

int MaxArraySum(int arr[],int n)
{
	if(n==1)
		return arr[0];


	int mayor=0;
			int x=0;


	int m = n/2;
	int Izq_MAS = MaxArraySum(arr,m);
	int Der_MAS = MaxArraySum(arr+m,n-m);
	int SumaIzq = INT_MIN;
	int SumaDer = INT_MIN;
	int sum=0;
int i;
int a=0;
	for( i=m;i < n; i++)
	{
		sum += arr[i];
		SumaDer = max(SumaDer,sum);
		almacen[a]=i;
		a++;

	}
		cout<<i<<" ";
	cout<<endl;
	sum = 0;

	int j;
	for( j= (m-1);j >= 0; j--)
	{
		sum += arr[j];
		SumaIzq = max(SumaIzq,sum);
	}


	for (int i = 0; i <9; i++){


							if(almacen[i] > mayor){

								mayor = almacen[i];

								x = i;

							}

						}
		cout<<"La mejor parte de la ruta 1 es entre las calles" << x<<" y";




	int t = max(Izq_MAS,Der_MAS);
	return max(t,SumaIzq+SumaDer);
}


int main()
{



	int arr[] = {4,-5,4,-3,4,4,-4,4,5};
//	int arr[]={1,2,3,3,4,2};



	cout<<"suma maxima: "<<endl;
		cout<<MaxArraySum(arr,6)<<"\n";




		return 0;


//		cout<<"La mejor parte de la ruta 1 es entre las calles"  2 y 3
//		cout<<La mejor parte de la ruta 2 es entre las calles 3 y 9
//		La ruta 3 no tiene calles interesantes
//int tam;
//	cout<<"ingrese tamano: ";cin>>tam;
//
//    	for (int i = 0; i <tam; i++) {
//
//    		cout<<"ingrese elementos : ";cin>>array[i];
//    		}



}






