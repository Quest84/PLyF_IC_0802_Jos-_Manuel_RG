#include<iostream>
#include<functional>

using namespace std;

int Calculadora( std::function<int(int, int)> calcular, const int a, const int b ) {
    
    return calcular(a, b);
}

void Engine( std::function<int( int, int )> cal )  {
    
    int x = 2, y = 4;
    int resultado = Calculadora( cal, x, y );
    cout << "Resultado = " << resultado << endl;

}

int main() {

    Engine( []( int x, int y ) -> int { return x + y; } );
    Engine( []( int x, int y ) -> int { return x * y; } );
    Engine( []( int x, int y ) -> int { return x / y; } );
    Engine( []( int x, int y ) -> int { return x - y; } );
    Engine( []( int x, int y ) -> int { return x % y; } );
    
    return 0;
}
