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
