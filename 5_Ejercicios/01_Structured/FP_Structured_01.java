import java.util.List;

/* Structured Approach */

public class FP_Structured_01 {

    public static void main( String[] args ) {

        List<Integer> numbers = List.of( 12, 9, 13, 4, 6, 2, 4, 12, 15 );

        FP_Structured_01.printAllNumbersInListStructured( numbers );
        System.out.println("");
        FP_Structured_01.printEvenNumbersInListStructured( numbers );
        System.out.println("");

        FP_Structured_01.printAllNumbersInListStructured( 
                List.of( 12, 9, 4, 6, 2, 4, 12, 15 )
                );
        System.out.println("");
        FP_Structured_01.printEvenNumbersInListStructured( 
                List.of( 12, 9, 4, 6, 2, 4, 12, 15 )
                );
        System.out.println("");
    }

    private static void printAllNumbersInListStructured( List<Integer> numbers ) {
        // How to loop the numbers?
        for( int number : numbers ) 
            System.out.print( number + ", " );
        System.out.println("");
    }

    private static void printEvenNumbersInListStructured( List<Integer> numbers ) {
        // How to loop the numbers?
        for( int number : numbers ) { 
            if( number % 2 == 0 )
                System.out.print( number + ", " );
        }
        System.out.println("");
    }
}
