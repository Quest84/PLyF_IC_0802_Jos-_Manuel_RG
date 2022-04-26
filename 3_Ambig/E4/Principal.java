public class Principal{
    
    public static void main( String[] args ) {
 
        // Solución, agregar el tipo de dato en los parámetros
        CalculadoraInt objInt = (x, y) -> x + y;
        Principal.engine(objInt);
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
