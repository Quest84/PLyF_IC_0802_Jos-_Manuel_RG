class Principal {

    public static void main( String[] args ) {

        Principal.engine( (int x, int y) -> (long x1, long y2) -> x1 + y2 );

    }
 
    public static void engine( CalcularInt obj ) {
            
        int x = 2, y = 3;
        CalcularLong o = obj.calcular( x, y );
        System.out.println( o.calcular( (long)x, (long)y ) );
    }
}
