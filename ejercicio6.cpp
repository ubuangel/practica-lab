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
