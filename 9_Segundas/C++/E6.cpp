#include<iostream>
#include<functional>

using namespace std;

int CalculadoraInt( std::function<int(int, int)> calcular, const int a, const int b ) {
    
    return calcular(a, b);
}

int CalculadoraLong( std::function<long(long, long)> calcular, const long a, const long b ) {
    
    return calcular(a, b);
}


void Engine( std::function<int( int, int )> cal )  {
    
    int x = 2, y = 4;
    int resultado = CalculadoraInt( cal, x, y );
    cout << "Resultado Int = " << resultado << endl;

}

// No debería haber ambiguedad(?)
void Engine2( std::function<long( long, long )> cal )  {
    
    long x = 2, y = 4;
    long resultado = CalculadoraLong( cal, x, y );
    cout << "Resultado Long = " << resultado << endl;

}

int main() {

    Engine( []( int x, int y ) -> int { return x + y; } );
    Engine( []( int x, int y ) -> int { return x * y; } );
    Engine( []( int x, int y ) -> int { return x / y; } );
    Engine( []( int x, int y ) -> int { return x - y; } );
    Engine( []( int x, int y ) -> int { return x % y; } );
  
    Engine2( []( long x, long y ) -> long { return x + y; } );
    Engine2( []( long x, long y ) -> long { return x * y; } );
    Engine2( []( long x, long y ) -> long { return x / y; } );
    Engine2( []( long x, long y ) -> long { return x - y; } );
    Engine2( []( long x, long y ) -> long { return x % y; } );
    
    return 0;
}
