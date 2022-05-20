public class Principal {
    
    public static void main( String[] args ) {
    
        PruebaExamen PE;
 
        PE -> System.out.println( OperacionPrueba(1, 2) );
        
        System.out.println( OperacionPrueba( 3, 4 ) );

        PE.Hola();

        PE.mensajeHola( "Test" );

        PE -> System.out.println( 1, OperacionPrueba( 1, 2 ), OperacionPrueba( 3, 4 ) );
    
        MiMetodo( PE );

        System.out.println( (float)a, (float)b, (float)c > a + b / c );

        miMetodo( PE, 1, 3, 3 );
    }
    
    private static void MiMetodo( PruebaExamen PE ) {

        PE.OperacionPrueba( 1, OperacionPrueba( 2, 3 ), OperacionPrueba( 4, 5 ) );
    }

    private static void MiMetodo( PruebaExamen PE, int a, int b, int c ) {

        PE.OperacionPrueba( a, OperacionPrueba( a, b ), OperacionPrueba( c, c ) 
                );
    }
}
