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
//ejercicio 4.1
int sum ( const int x , const int y ) {
return x + y ;
}
double sum ( const double x , const double y ) {
return x + y ;
}
//ejericio 4.4
int sum ( const int a , const int b , const int c = 0 , const int d = 0)
{

return a + b + c + d ;
}
//ejericio 4.5
int sum ( const int a , const int b , const int c = 0 , const int d = 0)
{

return a + b + c + d ;
}
//ejercicio 4.6
int sum ( const int numbers [] , const int numbersLen ) {

	return numbersLen == 0 ? 0 : numbers [0] + sum ( numbers + 1 ,
		numbersLen - 1) ;
}
//ejercicio 5
double x = rand () / ( double ) RAND_MAX , y = rand () / ( double ) RAND_MAX ;
//ejercicio 5.2
int dartsInCircle = 0;
	 for ( int i = 0; i < n ; ++ i ) {

	double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )
	RAND_MAX ;

		if ( sqrt ( x * x + y * y ) < 1 ) {

		++ dartsInCircle ;

	}
}
//ejercicio 5.3
 
double computePi ( const int n ) {

	srand ( time (0) ) ;


int dartsInCircle = 0;
	for ( int i = 0; i < n ; ++ i ) {
		double x = rand () / ( double ) RAND_MAX , y = rand () / ( double )
		RAND_MAX ;
	if ( sqrt ( x * x + y * y ) < 1 ) {
		++ dartsInCircle ;
		}
	}
// r ^2 is 1 , and a /4 = dartsInCircle /n , yielding this for pi :
return dartsInCircle / static_cast < double >( n ) * 4;
}
//eejrcicio 6
void printArray ( const int arr [] , const int len ) {

	for ( int i = 0; i < len ; ++ i ) {

		cout << arr [ i ];

	if ( i < len -1) {

		cout << " , " ;

		}

	}
 }

//ejercicio 6.2
void reverse ( int numbers [] , const int numbersLen ) {

	for ( int i = 0; i < numbersLen / 2; ++ i ) {

		int tmp = numbers [ i ];

		int indexFromEnd = numbersLen - i - 1;

		numbers [ i ] = numbers [ indexFromEnd ];

		numbers [ indexFromEnd ] = tmp ;

	}
}
//ejerciio 6.3
void transpose ( const int input [][ LENGTH ] , int output [][ WIDTH ]) {

	for ( int i = 0; i < WIDTH ; ++ i ) {

		for ( int j = 0; j < LENGTH ; ++ j ) {
		output [ j ][ i ] = input [ i ][ j ];
			}
	}
}
//ejerciio 6.5
void reverse ( int numbers [] , const int numbersLen ) {

	for ( int i = 0; i < numbersLen / 2; ++ i ) {

		int tmp = *( numbers + i ) ;

		int indexFromEnd = numbersLen - i - 1;

		*( numbers + i ) = *( numbers + indexFromEnd ) ;

		*( numbers + indexFromEnd ) = tmp ;

	}
}
//ejercicio 7.1
int stringLength ( const char * str ) {

	int length = 0;

	while (*( str + length ) != ’ \0 ’) {

		++ length ;

		}

	return length ;
 }
//ejrcicio 7.2
void swap ( int &x , int & y ) {

	int tmp = x ;

	x = y;

	y = tmp ;
}
//ejercicio 7.3
void swap ( int *x , int * y ) {

	int tmp = * x ;

	*x = *y;

	* y = tmp ;
}
//ejercicio 7.4
void swap ( int ** x , int ** y ) {

	int * tmp = * x ;

	*x = *y;

	* y = tmp ;
}
