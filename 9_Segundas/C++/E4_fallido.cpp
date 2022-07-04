#include<iostream>
#include<functional>

using namespace std;

// Las interfaces en C++ son Clases con una sola función virtual que debe ser = 0;
// Clase Abstracta
class CalculadoraInt{
    public:
        // Función Virtual
        virtual std::function<int(int, int)> calcular( int a, int b ) = 0;
};

class CalculadoraLong {
    public:
        // Funcion Virtual
        virtual std::function<long (long)> calcular( long a, int b ) = 0;
};

class Engine_1 : public CalculadoraInt
{
    public:
        // Sobrecargando la función virutal
        std::function<int(int, int)>calcular( int a, int b ) override {
            return [](int a, int b) -> int { return a * b; };
        }

};


int main( int args, char* argv[] ) {

    // Puntero a la clase derivada
    Engine_1* engine;

    auto suma = engine->calcular(5, 5);

    cout << suma << endl;
    // Puntero a la clase abstracta
    //cout << "==> CalculadoraInt --> Resultado = " << suma << endl;

    //op->imprimeOperacion( [](void) { cout << 10 + 20 << endl; } );
    // Mueve el puntero a la clase derivada
    //op = &lambdaObj;
    //op->imprimeOperacion(5, 10);

    //lambdaObj.miMetodo( op, 20, 10 );

    return 0;
}
