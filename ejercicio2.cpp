void f ( const int a = 5)
{
std :: cout << a *2 << " \ n " ;
}
int a = 123;
int main ()
	{
	f (1) ;
	f(a);
	int b = 3;
	f(b);
	int a = 4;
	f(a);
	f () ;
}
//ejercicio 4.3

int sum ( const int x , const int y , const int z ) {
return x + y + z ;
}
int sum ( const int a , const int b , const int c , const int d ) {
return a + b + c + d ;
}
