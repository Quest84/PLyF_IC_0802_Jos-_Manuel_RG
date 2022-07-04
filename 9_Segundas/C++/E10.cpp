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
void printOddNumbersInListFunctional( std::vector<int> numbers );
void printCubesOfOddNumbersInListFunctional( std::vector<int> numbers );
void printAllCoursesFunctional( std::vector<std::string> course);
void printSpringCoursesFunctional( std::vector<std::string> courses );
void printCoursesWhoseNameAtLeast4Letters( std::vector<std::string> courses );
void printCharactersInListFunctional( std::vector<std::string> courses );

auto print = [](const int& n) { cout << n << ", "; };
auto isEven = [](const int& n) { return 0 == n % 2; };
auto isOdd = [](const int& n) { return 1 == n % 2; };
auto square = [](const int& n) { return n * n; };
auto cube = [](const int& n) { return n * n * n; };
auto printStr = [](const std::string& s ) { cout << s << endl; };
auto isSpring = [](const std::string& s) { return 0 == s.find( "Spring" ); };
auto has4Letters = [](const std::string& s) { return 0 != ( s.length() >= 4 ); };
auto printChar = [](const std::string& s) { cout << s << "-> " << s.length() << endl;  };

int main( int argc, char* argv[] ) {

    std::vector<int> numbers { 12, 9, 13, 4, 6, 2, 4, 12, 15 };

    std::vector<std::string> courses { "Spring", "Spring Boot", "API",
        "Microservices", "AWS", "PCF", "Azure", "Docker", "Kubernetes" };

    cout << "1. Print Only Odd Numbers From the List" << endl;
    printOddNumbersInListFunctional( numbers );
    cout << endl << endl;

    cout << "2. Print All Courses individually" << endl;
    printAllCoursesFunctional( courses );
    cout << endl << endl;

    cout << "3. Print Courses Containing the Word Spring" << endl;
    printSpringCoursesFunctional( courses );
    cout << endl << endl;

    cout << "4. Print Courses Whose name has atleast 4 letters" << endl;
    printCoursesWhoseNameAtLeast4Letters( courses );
    cout << endl << endl;

    cout << "5. Print the cubes of odd numbers: " << endl;
    printCubesOfOddNumbersInListFunctional( numbers );
    cout << endl << endl;

    cout << "6. Print the number of characters in each course name" << endl;
    printCharactersInListFunctional( courses );
    cout << endl << endl;
    
    /*
    cout << "PrintAllNumbersInListFunctional: " << endl;
    printAllNumbersInListFunctional( numbers );
    cout << endl << endl;
 
    cout << "printEvenNumbersInListFunctional: " << endl;
    printEvenNumbersInListFunctional( numbers );
    cout << endl << endl;
    
    cout << "printSquaresofEvenNumbersInListFunctional: " << endl;
    printSquaresOfEvenNumbersInListFunctional( numbers );
    cout << endl << endl;
    */

    return 0;
}


void printOddNumbersInListFunctional( std::vector<int> numbers ) {

    ranges::for_each( numbers | ranges::views::filter(isOdd), print );
}

void printCubesOfOddNumbersInListFunctional( std::vector<int> numbers ) {

    ranges::for_each( numbers 
                    | ranges::views::filter(isOdd)
                    | ranges::views::transform(cube),
                    print );
}

void printAllCoursesFunctional( std::vector<std::string> courses ) {

    ranges::for_each( courses, printStr );
}

void printSpringCoursesFunctional( std::vector<std::string> courses ) {

    ranges::for_each( courses | ranges::views::filter(isSpring), printStr );
}

void printCoursesWhoseNameAtLeast4Letters( std::vector<std::string> courses ) {

    ranges::for_each( courses | ranges::views::filter(has4Letters), printStr );
}

void printCharactersInListFunctional( std::vector<std::string> courses ) {

    ranges::for_each( courses, printChar );
}


void printAllNumbersInListFunctional( std::vector<int> numbers ) {

    //std::for_each( numbers.begin(), numbers.end(), print );
    ranges::for_each( numbers, print );
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
