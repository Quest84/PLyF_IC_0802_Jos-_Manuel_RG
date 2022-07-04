#include<iostream>
#include<functional>

using namespace std;

int Operaciones( std::function<int(int, int)> imprimeOperacion, const int a, const int b ) {
    
    return imprimeOperacion(a, b);
}

int main() {

    auto suma = []( int num1, int num2) -> int { return num1 + num2; };

    int op = Operaciones( suma, 5, 10 );
    cout << op << endl;

    auto resta = []( int num1, int num2 ) -> int { return num1 - num2; };

    op = Operaciones( resta, 20, 10 );
    cout << op << endl;

    op = Operaciones( []( int num1, int num2 ) -> int { return num1 * num2; } , 20, 10 );
    cout << op << endl;
    
    return 0;
}
