#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<range/v3/all.hpp>

using std::cout;
using std::endl;

void printAllNumbersInListFunctional( std::vector<int> numbers );
void printEvenNumbersInListFunctional( std::vector<int> numbers );
void printSquaresOfEvenNumbersInListFunctional( std::vector<int> numbers );

auto print = [](const int& n) { cout << n << ", "; };
auto isEven = [](const int& n) { return 0 == n % 2; };
auto square = [](const int& n) { return n * n; };

int main( int argc, char* argv[] ) {

    std::vector<int> numbers { 12, 9, 13, 4, 6, 2, 4, 12, 15 };

    cout << "PrintAllNumbersInListFunctional: " << endl;
    printAllNumbersInListFunctional( numbers );
    cout << endl << endl;
    cout << "printEvenNumbersInListFunctional: " << endl;
    printEvenNumbersInListFunctional( numbers );
    cout << endl << endl;
    cout << "printSquaresofEvenNumbersInListFunctional: " << endl;
    printSquaresOfEvenNumbersInListFunctional( numbers );
    cout << endl << endl;

    return 0;
}

void printAllNumbersInListFunctional( std::vector<int> numbers ) {

    std::for_each( numbers.begin(), numbers.end(), print );
    //ranges::for_each( numbers, print );
}

void printEvenNumbersInListFunctional( std::vector<int> numbers ) {

    ranges::for_each( numbers | ranges::views::filter(isEven), print );

}

void printSquaresOfEvenNumbersInListFunctional( std::vector<int> numbers ) {

    ranges::for_each( numbers
                    | ranges::views::filter(isEven)
                    | ranges::views::transform(square),
                    print );
}

