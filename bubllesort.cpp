#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	int n,a[10];
	int t;
cout<<" Tamaño del arreglo "<<endl;
cin>>n;

for (int i = 0; i < n; i++) {
	cout<<	"ingresar elemnto "<<i+1<<" "<<"al arreglo "<<endl;
	cin>>a[i];
}

for (int j = n-1; j >0; j--) {

	for (int i = 0; i < j; i++) {
		if (a[i]>a[i+1]) {
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
}

	cout<<"mostrando al arreglo "<<endl;
for (int i = 0; i < n; i++){
	cout<<	"  posiscion : "<<i+1<<" "<<a[i]<<endl;
}
}
