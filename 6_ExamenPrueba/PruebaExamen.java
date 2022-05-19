/*
 *  Interfaz Funcional
 */

public interface PruebaExamen {

    default public void mensajeHola() {
        System.out.println( "Hola mi nombre es José Manuel Ruiz González" );
    }
    

    default public void mensajeHola( String mensaje ) { 
        System.out.println( "La cadena es: " + mensaje );
    }

    public static int operacionPrueba( int a, int b ) {
        return a + b;
    }

    public abstract void operacionPrueba( int a, int b, int c );
}
