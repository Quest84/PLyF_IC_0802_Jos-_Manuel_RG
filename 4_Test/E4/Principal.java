public class Principal{
    
    public static void main( String[] args ) {
 
        System.out.println( "==> CalculadoraInt --> resultado = " + 
                Principal.engine_1( (int)5, (int)5 ).calcular( 4, 4 ) );
        System.out.println( "==> CalculadoraLong --> resultado = " + 
                Principal.engine_1( (int)7, (int)7 ).calcular( 6, 6 ) );
        
        System.out.println( "==> CalculadoraInt --> resultado = " + 
                Principal.engine_2( (long)6, (long)6 ).calcular( 5, 5 ) );
        System.out.println( "==> CalculadoraLong --> resultado = " + 
                Principal.engine_2( (long)8, (long)8 ).calcular( 7, 7 ) );
    }

    // Retorna un objeto de tipo "CalculadoraInt"
    private static CalculadoraInt engine_1( int a, int b ) {

        return ( x, y ) -> a * b;
    } 

    // Retorna un objeto de tipo "CalculadoraLong"
    private static CalculadoraLong engine_2( long a, long b ) {

        return ( x, y ) -> a + b;
    }
}
