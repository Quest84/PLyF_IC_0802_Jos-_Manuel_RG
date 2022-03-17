#include"Class.h"

int main( int argc, char* argv[] ) {
    
    Persona p1;
 
    Persona p2;
    p2.Llenar();

    std::cout << "Constructor por defecto" << std::endl;
    p1.Datos();
    p1.Comer();
    p1.Caminar();
    p1.Hablar();
    p1.Dormir();

    std::cout << std::endl;
    p2.Datos();
    p2.Comer();
    p2.Caminar();
    p2.Hablar();
    p2.Dormir();

    return 0;
}
