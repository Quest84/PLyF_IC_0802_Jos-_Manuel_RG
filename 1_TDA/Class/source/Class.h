#ifndef _CLASS_H
#define _CLASS_H
#include <string>
#include <iostream>

class Persona {

    private:

        std::string nombre;
        std::string apellidoP;
        std::string apellidoM;
        int edad;
        std::string genero;

    public:

        Persona();
        ~Persona();
        void Llenar();
        void Datos();
        void Comer();
        void Caminar();
        void Hablar();
        void Dormir();
};
#endif
