#include<stdio.h>
#include<unistd.h>

typedef enum {
    goNorte = 0,
    waitNorte = 1,
    goEste = 2,
    waitEste = 3,
    detenido = 4
} Estados;

typedef enum {
    noCarros = 0,
    carrosEste = 1,
    carrosNorte = 10,
    ambosLados = 11
} Eventos;

int main( int argc, char* argv ) {

    Estados estado = detenido;

    int evento = 0;

    int size = 10;
    int eventos[10] = { 0, 0, 1, 10, 11, 11, 10, 10, 1, 10 };

    printf( "---Estado detenido---\n\n" );
    
    printf( "0. goNorte\n" );
    printf( "1. waitNorte\n" );
    printf( "2. goEste\n" );
    printf( "3. waitEste\n" );
    printf( "Elije el estado en el que quieres posicionarte: ");
    scanf ("%i", &estado );

    for( int i = 0; i < size; i++ ) {

        printf( "%i. Evento actual: ", i );

        switch( eventos[i] ){
            case noCarros:
                printf( "No_Carros\n" );
                if( estado == goNorte ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 3 );
                    break;
                } 
                if( estado == waitNorte ) {
                    estado = goEste;
                    printf( "Llendo al este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == goEste ) {
                    estado = goEste;
                    printf( "Llendo al este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(3);
                    break;
                }
                if( estado == waitEste ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(2);
                    break;
                }
                    
                break;
            case carrosEste:
                printf( "CarrosNorte\n" );
                if( estado == goNorte ) {
                    estado = waitNorte;
                    printf( "Esperando al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                } 
                if( estado == waitNorte ) {
                    estado = goEste;
                    printf( "Llendo al este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == goEste ) {
                    estado = goEste;
                    printf( "Llendo en este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(3);
                    break;
                }
                if( estado == waitEste ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(2);
                    break;
                }
                break;

            case carrosNorte:
                printf( "CarrosNorte\n" );
                if( estado == goNorte ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                } 
                if( estado == waitNorte ) {
                    estado = goEste;
                    printf( "Llendo al este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == goEste ) {
                    estado = waitEste;
                    printf( "Esperando en este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == waitEste ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(2);
                    break;
                }
                break;

            case ambosLados:
                printf( "AmbosLados\n" );
                 if( estado == goNorte ) {
                    estado = waitNorte;
                    printf( "Esperando en norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                } 
                if( estado == waitNorte ) {
                    estado = goEste;
                    printf( "Llendo al este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == goEste ) {
                    estado = waitEste;
                    printf( "Esperando en este\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 2 );
                    break;
                }
                if( estado == waitEste ) {
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep(2);
                    break;
                }
                break;

            default:
                printf( "Evento inválido\n" );
                printf( "estado = %i\n\n", estado );
                break;
        } 
    }
 
    printf( "\nFin del programa!\n" );
    return 0;
}

