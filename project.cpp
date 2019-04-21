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
int main()
{
  unsigned  long long n, c, primero = 0, segundo = 1, next,sum=0;

   cout << "ingrese el numerod e terminos de la serie de fibonacci \n" ;
   cin >> n;

   cout << "First " << n << " los terminos de fibonacci :- \n" ;

   for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = primero + segundo;
         primero = segundo;
         segundo = next;
      if(next%2==0 && sum<4000000)
    	  sum=sum+next;
      }
      cout << next <<" \n";
      cout <<"\n" <<sum<<" \n";
   }

   return 0;
}

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

