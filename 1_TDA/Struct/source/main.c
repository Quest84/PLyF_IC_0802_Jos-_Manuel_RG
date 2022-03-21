#include "struct.h"

int main( int argc, char* argv[] ) {

    struct Persona p1;

    printf( "Ingresa tu nombre: " );
    gets( p1.nombre );

    printf( "Ingresa tu apellido paterno: " );
    gets( p1.apellidoP );

    printf( "Ingresa tu apellido materno: " );
    gets( p1.apellidoM );

    printf( "Ingresa tu genero: " );
    gets( p1.genero );

    printf( "Ingresa tu edad: " );
    scanf( "%i", &p1.edad );
    
    Datos( p1 );
    Caminar( p1 );
    Hablar( p1 );
    Dormir( p1 );


    return 0;
}
