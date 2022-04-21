public class Principal{
    
    public static void main( String[] args ) {
 
        // Solución, agregar el tipo de dato en los parámetros
        Principal.engine((int x, int y) -> x + y );
        Principal.engine((long x, long y) -> x + y );
        /*Principal.engine((x, y) -> x * y );
        Principal.engine((x, y) -> x / y );
        Principal.engine((x, y) -> x - y );
        Principal.engine((x, y) -> x % y );*/
    }

    // Sobrecarga de Métodos
    private static void engine( CalculadoraInt cal ) {

        int x = 2, y = 4;
        int resultado = cal.calcular( x, y );
        System.out.println( "Resultado Int = " + resultado );
    }

    private static void engine( CalculadoraLong cal ) {

        long x = 2, y = 4;
        long resultado = cal.calcular( x, y );
        System.out.println( "Resultado Long = " + resultado );
    }

}
