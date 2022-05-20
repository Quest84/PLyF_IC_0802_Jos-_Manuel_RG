/*
 *  Interfaz Funcional
 */

public interface PruebaExamen {

    public void Hola() {
        System.out.println( "Hola mi nombre es José Manuel Ruiz González" );
    }
    

    public void MensajeHola( String mensaje ) { 
        System.out.println( "La cadena es: " + mensaje );
    }

    public static int OperacionPrueba( int a, int b ) {
        return a + b;
    }

    public void OperacionPrueba( int a, int b, int c ) {

    }
}
