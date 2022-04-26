public class Principal{
    
    public static void main( String[] args ) {
 
        System.out.println( "==> CalculadoraInt --> resultado = " + 
                Principal.engine_1().calcular( 5, 5 ) );
        System.out.println( "==> CalculadoraLong --> resultado = " + 
                Principal.engine_1().calcular( 6, 6 ) );
        
        System.out.println( "==> CalculadoraInt --> resultado = " + 
                Principal.engine_2().calcular( 5, 5 ) );
        System.out.println( "==> CalculadoraLong --> resultado = " + 
                Principal.engine_2().calcular( 6, 6 ) );
    }

    // Retorna un objeto de tipo "CalculadoraInt"
    private static CalculadoraInt engine_1() {

        return ( x, y ) -> x * y;
    } 

    // Retorna un objeto de tipo "CalculadoraLong"
    private static CalculadoraLong engine_2() {

        return ( x, y ) -> x - y;
    }
}
