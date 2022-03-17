#include "struct.h"
#include <stdio.h>

void Datos( struct Persona p ) {
 
    printf( "\nNombre: %s\n", p.nombre );
    printf( "Apellido Paterno: %s\n", p.apellidoP );
    printf( "Apellido Materno: %s\n", p.apellidoM );
    printf( "Edad: %d\n", p.edad );
    printf( "Genero: %s\n\n", p.genero );
}

void Comer( struct Persona p ) {                                                                                                                                                                  
                                                                                                                                                                                                 
    printf( "\n%s %s %s come", p.nombre, p.apellidoP, p.apellidoM );                                                                                                                              
}                                                                                                                                                                                                 
                                                                                                                                                                                                  
void Caminar( struct Persona p ) {                                                                                                                                                                
                                                                                                                                                                                                  
    printf( "\n%s %s %s camina", p.nombre, p.apellidoP, p.apellidoM );                                                                                                                            
}                                                                                                                                                                                                 
void Hablar( struct Persona p ) {                                                                                                                                                                 
                                                                                                                                                                                                  
    printf( "\n%s habla como perico", p.nombre );                                                                                                                                                 
}                                                                                                                                                                                                 
                                                                                                                                                                                                  
void Dormir( struct Persona p ) {                                                                                                                                                                 
                                                                                                                                                                                                  
    printf( "\n%s apenas duerme\n", p.nombre );                                                                                                                                                   
}  
