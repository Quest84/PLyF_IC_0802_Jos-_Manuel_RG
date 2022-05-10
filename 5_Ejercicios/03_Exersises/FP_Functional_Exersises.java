import java.util.List;

/* Exersises 
 * 1. Print Only Odd Numbers from the List
 * 2. Print All Courses individually
 * 3. Print Courses Containing the Word "Spring"
 * 4. Print Courses Whose Name has atleast  4 letters
 * 5. Print the cubes of odd Numbers
 * 6. Print the number of characters in each Course name
 */

public class FP_Functional_Exersises {

    public static void main( String[] args ) {
        
        List<Integer> numbers = List.of( 12, 9, 13, 4, 6, 2, 4, 12, 15 );

        List<String> courses = List.of( "Spring", "Spring Boot", "API",
            "Microservices", "AWS", "PCF", "Azure", "Docker", "Kubernetes" );

        System.out.println( "1. Print Only Odd Numbers From the List: " );
        printOddNumbersInListFunctional( numbers );

        System.out.println( "\n2. Print All Courses individually" );
        printAllCoursesFunctional( courses );

        System.out.println( "\n3. Print Courses Containing the Word Sprint" );
        printSpringCoursesFunctional( courses );

        System.out.println( "\n4. Print Courses Whose name has atleas 4 letters" );
        printCoursesWhoseNameAtleast4Letters( courses );

        System.out.println( "\n5. Print the cubes of odd numbers" );
        printCubesOfOddNumbersInListFunctional( numbers );
        
        System.out.println( "\n6. Print the number of characters in each course name" );
        printCharactersInListFunctional( courses );

    }

    private static void printNum( int number ) {
        
        System.out.print( number + ", " );
    }

    private static boolean isOdd( int number ) {

        return ( number % 2 != 0 );
    }

    private static void printOddNumbersInListFunctional( List<Integer> numbers ) {

        numbers.stream()                        // ----> Convert to Stream
            .filter( FP_Functional_Exersises::isOdd )     // ----> Method Reference ---> Filter = Only Allow Odd Numbers
            .forEach( FP_Functional_Exersises::printNum );   // ----> Method Reference
        System.out.println("");
    }

    private static void printCubesOfOddNumbersInListFunctional( List<Integer> numbers ) {

        numbers.stream()
            .filter( number -> number % 2 != 0 )
            .map ( number -> number*number*number )
            .forEach( FP_Functional_Exersises::printNum );
        System.out.println( "" );
    }

    private static void printStr( String course ) {

        System.out.println( course + ", " );
    }

    private static void printAllCoursesFunctional( List<String> courses ) {

        courses.stream()
            .forEach( FP_Functional_Exersises::printStr );
        System.out.println( "" );
    }

    private static void printSpringCoursesFunctional( List<String> courses ) {

        courses.stream()
            .filter( course -> course.contains("Spring") )
            .map( course -> course )
            .forEach( FP_Functional_Exersises::printStr );
        System.out.println( "" );
    }

    private static void printCoursesWhoseNameAtleast4Letters( List<String> courses ) {

        courses.stream()
            .filter( course -> course.length() >= 4 )
            .map( course -> course )
            .forEach( FP_Functional_Exersises::printStr );
        System.out.println( "" );
    }

    private static void countChar( String course ) {

        System.out.println( course + " " + course.length() );
    }

    private static void printCharactersInListFunctional( List<String> courses ) {

        courses.stream()
            .forEach( FP_Functional_Exersises::countChar );
        System.out.println( "" );
    }
}

