#ifndef _STRUCT_H
#define _STRUCT_H
#include <stdio.h>

struct Persona {                                                                                                                                                                                  
    
    char nombre[30];                                                                                                                                                                          
    char apellidoP[20];                                                                                                                                                                       
    char apellidoM[20];                                                                                                                                                                       
    char genero[10];
    int edad;                                                                                                                                                                                 
};                                                                                                                                                                                            
 
void Datos( struct Persona p );
void Comer( struct Persona p );                                                                                                                                                                                
void Caminar( struct Persona p );                                                                                                                                                                                                 
void Hablar( struct Persona p );                                                                                                                                                      
void Dormir( struct Persona p );  

#endif
