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

//project euler problem 3
//https://projecteuler.net/archives

using namespace std;
int main(){
n = 600851475143;		
i = 2;
while( i * i <= n){
    while (n % i == 0)
        n = n / i;
    i = i + 1; }
cout<<n;}

//project3

void primo (double n)
{
    for(int i=2;i<n;i++)
    {
        int c=0;
        double num;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

        if(c==0)
        {

            num=i;
            if(fmod(n,num)==0)
            {
            cout<<num<<" ";
            }
        }
    }
}
int main()
{
    double n;
    cout<<"numero: ";
    cin>>n;
    primo(n);
}

//project euler problem 2

int main()
{
  unsigned  long  n, c, primero = 0, segundo = 1, next,sum=0;

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


//project 4

int palindromo3(int n)
{
    int m=n;
    int p=1;
    while(n/10>=1)
    {

        p=p*10;
        n=n/10;
    }

   int numero=0;
    while(m/10>=1)
    {
        numero=numero+m%10*p;
        p=p/10;
        m=m/10;
    }
    return numero+m;
}
int main()
{
    int i,j;
    int z;
    for(i=100;i<1000;i++)
    {
       for(int j=100;j<1000;j++)
       {
           z=i*j;
           if(z==palindromo3(z))
           {
               cout<<z<<" ";
           }
       }
    }
}
//eejrcicio 5
void dividir(double n, int k)
{
    for(int i=100;i<n;i++)
    {
        int c=0;
        for(int j=1;j<=k;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }

        if(c==k)
        {
            cout<<i<<",";
        }
    }
}


int main()
{
    double n;
    int k;
    cout<<"numero: ";
    cin>>n;
    cout<<"divisores: ";
    cin>>k;
    dividir(n,k);
}
//ejercicio 6
#include<math.h>
int main(){
	  int s=0, t,n;
	cout<<" ingrese hasta que numero \n";
	cin>>n;
	for (int i = 1; i <= n; i++){
		s=s+pow(i,2);
	}


//	for (int j = 1; j <= n; j++){
//		t=t+j;
		t=(n*(n+1))/2;
//		cout<<t<<" ";
//	}
		cout<<s<<"\n";
		cout<<t <<" \n";;
	cout<<pow(t,2)-s;
}
//primos ejercicio 7

int main(){//empieza desde el 2 1 no es primo
	long n,cont=0;
	cout<<" ingresar numero \n";cin>>n;
	for (int j = 1; j < n; j++) {
		for (int var =1; var<= j+1; var++) {
			if((j+1)%var==0 )
				cont++;

					}
if(cont==2)
	cout<<"es primo \n"<<j+1<<"\n";
cont=0;
	}
}
//project 9
void pythagorean(int n)
{
    int a,b,c;
    for(int c=1;c<100000;c++)
        for(int a=1;a<c;a++)
            for(int b=1;b<c;b++)
            {
                if(c*c==a*a+b*b&&a+b+c==n)
                {
                    cout<<c<<endl;
                    cout<<a<<endl;
                    cout<<b<<endl;
                }
            }
}
//ejrcicio 10
int main(){
		long n,cont=0,sum=0;
		cout<<" ingresar numero \n";cin>>n;
		for (int j = 1; j < n; j++) {
			cont=0;
			for (int var =1; var<= j+1; var++) {
				if((j+1)%var==0 )
					cont++;

						}
	if(cont==2){
	cout<<"es primo \n"<<j+1<<"\n";
		 sum+=(j+1);
		cout<<"sumatoria"<<sum<<" ";}

	}
//		while(sum<2000000){
}
