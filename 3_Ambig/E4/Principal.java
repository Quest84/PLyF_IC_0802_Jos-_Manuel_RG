public class Principal{
    
    public static void main( String[] args ) {
 
        // Solución, agregar el tipo de dato en los parámetros
        CalculadoraInt objInt = (x, y) -> x + y;
        Principal.engine(objInt);
        CalculadoraInt objInt2 = (x, y) -> x * y;
        Principal.engine(objInt2);
        CalculadoraInt objInt3 = (x, y) -> x / y;
        Principal.engine(objInt3);
        CalculadoraInt objInt4 = (x, y) -> x - y;
        Principal.engine(objInt4);
        CalculadoraInt objInt5 = (x, y) -> x % y;
        Principal.engine(objInt5);
 
        CalculadoraLong objLong = (x, y) -> x + y;
        Principal.engine(objLong);
        CalculadoraLong objLong2 = (x, y) -> x * y;
        Principal.engine(objLong2);
        CalculadoraLong objLong3 = (x, y) -> x / y;
        Principal.engine(objLong3);
        CalculadoraLong objLong4 = (x, y) -> x - y;
        Principal.engine(objLong4);
        CalculadoraLong objLong5 = (x, y) -> x % y;
        Principal.engine(objLong5);
 
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
