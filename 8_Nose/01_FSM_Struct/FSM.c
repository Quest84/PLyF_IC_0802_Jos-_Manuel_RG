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
    
    printf( "---Estado detenido---\n\n" );

    while( 1 ) {
        // Agregar un array de eventos
        printf( "0. No_Carros\n" );
        printf( "01. Carros Este\n" );
        printf( "10. Carros Norte\n" );
        printf( "11. Ambos Lados\n" );
        printf( "Introduce una evento: \n" );
        scanf( "%i", &evento);

        switch( evento ){
            case noCarros:
                if( estado == detenido ){
                    estado = goNorte;
                    printf( "Llendo al norte\n" );
                    printf( "estado = %i\n\n", estado );
                    sleep( 3 );
                    break;
                } 
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
                    sleep( 2 );
                    break;
                }
                if( estado == goEste ) {
                    estado = goEste;
                    printf( "Esperando en este\n" );
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
    
    return 0;
}

