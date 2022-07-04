#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

void printAllNumbersInListStructured( std::vector<int> numbers );
void printEvenNumbersInListStructured( std::vector<int> numbers );

int main( int argc, char* argv[] ) {

    std::vector<int> numbers { 12, 9, 13, 4, 6, 2, 4, 12, 15 };

    printAllNumbersInListStructured( numbers );
    std::cout << std::endl;
    printEvenNumbersInListStructured( numbers );
    std::cout << std::endl;

    printAllNumbersInListStructured( std::vector<int> { 12, 9, 4, 6, 2, 4, 12 } );
    std::cout << std::endl;
    printEvenNumbersInListStructured( std::vector<int> { 12, 9, 4, 6, 2, 4, 12 } );
    std::cout << std::endl;

    return 0;
}

void printAllNumbersInListStructured( std::vector<int> numbers ) {

    for( int number : numbers )
        std::cout << number << ", ";
    std::cout << std::endl;
}

void printEvenNumbersInListStructured( std::vector<int> numbers ) {

    for( int number : numbers ) {

        if( number % 2 == 0 )
            std::cout << number << ", ";
    }
    std::cout << std::endl;
}
