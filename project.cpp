//project euler problem 3
//https://projecteuler.net/archives
#include<iostream>
using namespace std;
int main(){
n = 600851475143;		
i = 2;
while( i * i <= n){
    while (n % i == 0)
        n = n / i;
    i = i + 1; }
cout<<n;

}
//project euler problem 2
int main(){
	unsigned long long a[100],n,sum=0;

	cout<<" termino del fibonaci mayo o igual que 3 ";cin>>n;
	a[1]=1;
	a[0]=1;
	cout<<a[1];
	 cout<<",";
	cout<<a[0]<<",";
	for (int i = 0; i < n-2; i++) {
		a[i+2]=a[i+1]+a[i];
		if (a[i+2]%2==0 ) {


			sum+=a[i+2];
			cout<<"suma"<<sum<<endl;
		}

		}//233168
	cout<<"fibonacii del termino  en el ejrcicio "<<n-1<<" "<<a[n-1]<<" ,";
	}//4613732
//project euler problem 1
int main(){
//	cout<<" ingrese  "<<endl;
	int sum=0;
	for (int var = 3; var < 1000; var++) {
		if(var%3==0 ||var%5==0){
			sum+=var;
		}
}
	cout<<sum;}

//primos
int main()
{
//for (int j=2;j<=100;j++){//por definicion el 1 no es primo, se empieza en 2
 //int a=0;
 int n;
 cout<<"numero";cin>>n;
 for( int j = 2; j <=n; j++)
 {
     
 int a=0;
 for(int i=1;i<=n;i++)//divide a j entre los números del 1 al 100
 
 {
    if(j%i==0) // si num1 módulo de i es 0, incrementamos a en 1.
    a++;
 }
 if (a==2){ //si solo tiene dos números divisores entonces es primo y se imprime
 cout<<" "<<j;
        }
    }
}

