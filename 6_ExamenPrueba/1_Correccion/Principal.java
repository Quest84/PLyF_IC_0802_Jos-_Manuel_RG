// 1
public class Principal {
    
    // 2
    public static void main( String[] args ) {
    
        // 3
        PruebaExamen PE;
        // 4
        PE = (a, b, c) -> { System.out.println( 1 + 2 + 3 ); };
        
        // 5
        System.out.println( PruebaExamen.operacionPrueba( 4, 5 ) );

        // 6
        PE.mensajeHola();

        // 7
        PE.mensajeHola( "Test" );

        // 8
        PE = (a, b, c) -> { System.out.println( 1 + ( 2 * 3 ) ); };
    
        // 9
        PE.operacionPrueba( 
                3, 
                PruebaExamen.operacionPrueba( 3, 3 ), 
                PruebaExamen.operacionPrueba( 3, 3 ) 
            );

        // Paso 12
        miMetodo( PE );

        // 13
        miMetodo( (a, b, c) -> System.out.println( 1 + ( 4 / 2 ) ) );

        // 16
        PE = ( (a, b, c ) -> System.out.println( 6.0 + ( 7.0 / 8.0 ) ));
        miMetodo( PE );

        // 17
        miMetodo( PE, 1, 3, 3 );
    }
    
    // Paso 10
    private static void miMetodo( PruebaExamen PE ) {

        // Paso 11
        PE.operacionPrueba( 
                2,
                PruebaExamen.operacionPrueba( 2, 2 ),
                PruebaExamen.operacionPrueba( 2, 2 )
                );
    }

    // 14
    private static void miMetodo( PruebaExamen PE, int a, int b, int c ) {

        // 15
        PE.operacionPrueba( 
                a, 
                PruebaExamen.operacionPrueba( a, b ),
                PruebaExamen.operacionPrueba( c, c ) 
                );
    }

}
