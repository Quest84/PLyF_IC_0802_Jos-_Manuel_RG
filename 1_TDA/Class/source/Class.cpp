#include"Class.h"

Persona::Persona() {

    this->nombre = "Manuel";
    this->apellidoP = "Ruiz";
    this->apellidoM = "González";
    this->edad = 25;
    this->genero = 'M';
}

Persona::~Persona() {  }

void Persona::Llenar() {

    std::cout << "Ingresa el nombre: ";
    std::cin >> this->nombre;
    std::cout << "Ingresa el apellido paterno: ";
    std::cin >> this->apellidoP;
    std::cout << "Ingresa el apellido materno: ";
    std::cin >> this->apellidoM;
    std::cout << "Ingresa la edad: ";
    std::cin >> this->edad;
    std::cout << "Ingresa el genero: ";
    std::cin >> this->genero;
}

void Persona::Datos() {
    
    std::cout << "Nombre: " << this->nombre << std::endl;;
    std::cout << "Apellido Paterno: " << this->apellidoP << std::endl;;
    std::cout << "Apellido Materno: " << this->apellidoM << std::endl;;
    std::cout << "Edad: " << this->edad << std::endl;;
    std::cout << "Genero: " << this->genero << std::endl;;
}

void Persona::Comer() {

    std::cout << this->nombre << " está comiendo" << std::endl;
}

void Persona::Caminar() {

    std::cout << this->nombre << " " << this->apellidoP << " " << this->apellidoM << " camina" << std::endl;
}

void Persona::Hablar() {

    std::cout << this->nombre << " habla como perico" << std::endl;
}

void Persona::Dormir() {

    std::cout << this->nombre << " duerme" << std::endl;
}
