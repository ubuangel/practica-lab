void reverse ( int numbers [] , const int numbersLen ) {

	for ( int i = 0; i < numbersLen / 2; ++ i ) {

		int tmp = numbers [ i ];

		int indexFromEnd = numbersLen - i - 1;

		numbers [ i ] = numbers [ indexFromEnd ];

		numbers [ indexFromEnd ] = tmp ;

		}
 }

int main(){
	int n,a[20],aux=0,t[20],cont=0;

	cout<<" ingrese tamaño de arreglo \n";cin>>n;
	for (int  e= 0;  e< n; e++){
			cin>>a[e];
			t[e]=a[e];}
	reverse(a,n);

	for (int i = 0; i < n; i++)
		cout<<a[i];
	for (int i = 0; i < n; i++) {
		if (a[i]==t[aux]) {
			aux++;
			cont++;
		}
	}

if (cont==n) {
	cout<<" es palindroma \n";
}else {
	cout<<" no es palindroma \n";
	}

}
