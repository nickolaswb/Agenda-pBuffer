#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

	void *pBuffer;
	pBuffer = ( int* )malloc( sizeof( int ) * 50 );
	
	if ( !pBuffer ) {
		
		return 1;

	}
	
	int *sel;
	sel = ( int* )pBuffer;
	
	int *num;
	num = ( int* )pBuffer + ( sizeof( int ) );
	*num = 100;
	
	int *i;
	i = ( int* )pBuffer + ( sizeof( int ) * 2 );
	*i = 0;
	
	int *cont;
	cont = ( int* )pBuffer + ( sizeof( int ) * 3 );
	*cont = 0;
	
	int *l;
	l = ( int* )pBuffer + ( sizeof( int ) * 4 );
	*l = 0;
	
	int *num2;
	num2 = ( int* )pBuffer + ( sizeof( int ) * 5 );
	*num2 = 100;
	
	int *num3;
	num3 = ( int* )pBuffer + ( sizeof( int ) * 6 );
	*num3 = 100;
	
	int *valor;
	valor = ( int* )pBuffer + ( sizeof( int ) * 7 );
	*valor = 1;
	
	pBuffer = ( char* )realloc( pBuffer, 1000 * sizeof( char ) );
	
	char *d = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 );
	char *c2;
	char *c;
	
	do {
		
		printf( "1 - Adicionar Pessoa (Nome, Idade, email)\n" );
		printf( "2 - Remover Pessoa\n" );
		printf( "3 - Buscar Pessoa\n" );
		printf( "4 - Listar todos\n" );
		printf( "5 - Sair\n" );
	
		scanf( "%d", sel );
	
		switch ( *sel ) {
			
			case 1:
		
			printf( "Nome: " );
			c = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num );
			*c = getchar( );
			fgets( c, 50, stdin );
			*num = *num + strlen( c ) + 1;
		
			printf( "Idade: " );
			c = ( char* )pBuffer + ( 50 * sizeof(int) + 2 + *num );
			fgets( c, 5, stdin );
			*num = *num + strlen( c ) + 1;
		
			printf( "Email: " );
			c = ( char* )pBuffer + ( 50 * sizeof(int) + 2 + *num );
			fgets( c, 50, stdin );
			*num = *num + strlen( c ) + 1;
		
			( *cont )++;
		
			if ( *num > ( ( *valor ) * 1000 - 500 ) ) {
		
				( *valor )++;
				pBuffer = ( char* )realloc( pBuffer, ( ( *valor ) * 1000 ) * sizeof( char ) );
		
			}
		
			break;
		
			case 2:
		
			printf( "Digite o nome: " );
			d = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 );
			*d = getchar( );
			fgets( d, 50, stdin );
			
			*num2 = 100;
			c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
			for ( *num2 = *num2; *num2 < *num; *num2 = *num2 ) {
		
				if ( strcmp( c2, d ) == 0 ) {
					d = c2;
					*num3 = *num2;
					
					*num2 = *num2 + strlen( c2 ) + 1;
					c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
					*num2 = *num2 + strlen( c2 ) + 1;
					c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
					*num2 = *num2 + strlen( c2 ) + 1;
					c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
					for ( *num2 = *num2; *num2 < *num; *num2 = *num2 ) {
		
						strcpy( d, c2 );
						*num3 = *num3 + strlen( d ) + 1;
						d = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num3 );
						*num2 = *num2 + strlen( c2 ) + 1;
						c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
					
					}
					
					*num = *num3;
					c = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num );
					*cont = *cont - 1;
					*num2 = 100;

					break;

				}
		
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
			}
		
			break;
		
			case 3:
		
			printf( "Digite o nome: " );
			char *d = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 );
			*d = getchar( );
			fgets( d, 50, stdin );
		
			*num2 = 100;
			c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
			for ( *num2 = *num2; *num2 < *num; *num2 = *num2 ) {
		
				if ( strcmp( c2, d ) == 0 ) {
				
					printf( "Nome: " );
					printf( "%s", c2 );
		
					*num2 = *num2 + strlen( c2 ) + 1;
					c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
					printf( "Idade: " );
					printf( "%s", c2 );
		
					*num2 = *num2 + strlen( c2 ) + 1;
					c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
					printf( "Email: " );
					printf( "%s", c2 );
		
					*num2 = 100;
					
					break;
				
				}
		
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
				*num2 = *num2 + strlen( c2 ) + 1;
				c2 = ( char* )pBuffer + ( 50 * sizeof( int ) + 2 + *num2 );
		
			}	
		
			break;
		
			case 4:
		
			for ( *l = 0; *l < *cont; ( *l )++ ) {
		
				printf( "Nome: " );
		
				for ( *i = *i; *i < ( *i + 50 ); ( *i )++ ) {
		
					printf( "%.*s", 1, ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) );
		
					if ( *( ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) ) == '\0' ) {
						
						break;
					
					}
		
				}
				
				printf( "Idade: " );
		
				for ( ( *i )++; *i < ( *i + 5 ); ( *i )++ ) {
		
					printf( "%.*s", 1, ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) );
		
					if ( *( ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) ) == '\0' ) {
						
						break;
					
					}
		
				}	
		
				printf( "Email: " );
		
				for ( ( *i )++; *i < ( *i + 50 ); ( *i )++ ) {
		
					printf( "%.*s", 1, ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) );
		
					if ( *( ( char* )pBuffer + ( 50 * sizeof( int ) + 102 + *i ) ) == '\0' ) {
						
						break;
					
					}
		
				}

				printf( "\n" );
				( *i )++;
			}	

			*i = 0;
		
			break;
		
		}

	} while ( *sel != 5 );

	free( pBuffer );
	return 0;
	
}