// 1
public class Principal {
    
    // 2
    public static void main( String[] args ) {
    
        // 3
        PruebaExamen PE;
        // 4
        PE = (a, b, c) -> { System.out.println( a + b + c ); };
        PE.operacionPrueba( 5, 5, 5 ); 
        // 5
        System.out.println( PruebaExamen.operacionPrueba( 10, 10 ) );

        // 6
        PE.mensajeHola();

        // 7
        PE.mensajeHola( "Test" );

        // 8
        PE = (a, b, c) -> { System.out.println( a + ( b * c ) ); };
    
        // 9
        PE.operacionPrueba( 
                5, 
                PruebaExamen.operacionPrueba( 1, 1 ), 
                PruebaExamen.operacionPrueba( 2, 2 ) 
            );

        // Paso 12
        miMetodo( PE );

        // 13
        miMetodo( (a, b, c) -> System.out.println( a + ( b / c ) ) );

        // 16
        PE = ( (a, b, c ) -> System.out.println( (float)a + ( (float)b / (float)c ) ));

        // 17
        miMetodo( PE, 5, 1, 2 );
    }
    
    // Paso 10
    private static void miMetodo( PruebaExamen PE ) {

        // Paso 11
        PE.operacionPrueba( 
                5,
                PruebaExamen.operacionPrueba( 2, 2 ),
                PruebaExamen.operacionPrueba( 3, 3 )
                );
    }

    // 14
    private static void miMetodo( PruebaExamen PE, int a, int b, int c ) {

        // 15
        PE.operacionPrueba( 
                a, 
                PruebaExamen.operacionPrueba( b, b ),
                PruebaExamen.operacionPrueba( c, c ) 
                );
    }

}
